#include <iostream>
#include <stack>

using namespace std;
struct node{
	int val;
	struct node *left,*right;
};

struct node* newNode(int val){
	struct node *temp= new node;
	temp->val=val;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

struct node* insert(struct node *root, int val){
	if(root==NULL) return newNode(val);
	
	if(val<root->val) root->left=insert(root->left,val);
	else if(val>root->val) root->right=insert(root->right,val);
	return root;	
}
void inorder(struct node* root){
	
	if(root!=NULL){
		inorder(root->left);
		cout<<root->val<<"\n";
		inorder(root->right);
	}

}
struct node* findpred(struct node* root){
	while(root->right){
		root=root->right;	
	}
	return root;
}

void morristraversal(struct node *root){
	if(root==NULL) return;
	
	struct node *curr=root,*pre=NULL;
	while(curr){
		if(curr->left==NULL){
			cout<<curr->val<<"\n";
			curr=curr->right;
		}	
		else{
			pre = curr->left;
			while(pre->right && pre->right!=curr)
				pre=pre->right;

			if(pre->right==NULL){
				pre->right=curr;
				curr=curr->left;
			}
			else{
				pre->right=NULL;
				cout<<curr->val<<"\n";
				curr=curr->right;
					
			}
		}
	}
}

bool search(struct node *root, int val){
	if(root==NULL) return false;

	if(root->val==val) return true;

	if(root->val<val) return search(root->right,val);
	else return search(root->left,val);
}
int main(){
	
	struct node *root=NULL;
	root=insert(root,1);
	insert(root,21);
	insert(root,5);
	insert(root,33);
	insert(root,23);
	insert(root,10);
	
	//inorder(root);
	morristraversal(root);
	cout<<"\nsearching for 10 "<<search(root,10);
	cout<<"\nsearching for 1 "<<search(root,1);
	cout<<"\nsearching for 100 "<<search(root,100);
	cout<<"\nsearching for 21 "<<search(root,21);
	cout<<"\nsearching for 30 "<<search(root,30);
	cout<<"\nsearching for 33 "<<search(root,33);
	return 0;
}
