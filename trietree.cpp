#include <iostream>

#define ALPHA 26
#define CASE 'a'

using namespace std;

struct TrieNode{
	struct TrieNode* children[ALPHA];
	bool isEnd;
};

struct TrieNode* getNode(){
	struct TrieNode* tempNode = new TrieNode;
	tempNode->isEnd= false;

	for(int i = 0; i< ALPHA; i++){
		tempNode->children[i] = NULL;
	}
	return tempNode;
}

void insert(struct TrieNode* root, string word){
	struct TrieNode* temp= root;

	for(int i = 0; i< word.length();i++){

		int index = word[i]-CASE;
		if(!temp->children[index]){
			temp->children[index]= getNode();
		}
		temp = temp->children[index];
	}
	temp->isEnd = true;
}

bool search(struct TrieNode* root, string word){

	struct TrieNode* temp = root;
	for(int i = 0;i<word.length();i++){
		if(!temp->children[word[i]-CASE])
			return false;
		temp = temp->children[word[i]-CASE];
	}
	return (temp!=NULL);
}
int main(){

	string words[] = {
		"yo","yoyoy","here","there", "every","everywhere","boys","boyschool"
	};

	struct TrieNode* root = getNode();

	int n = sizeof(words)/sizeof(words[0]);

	for(int i=0;i<n;i++){
		insert(root,words[i]);
	}

	cout<<"\nTest yoyof "<<search(root,"yoyof");

	cout<<"\nTest her "<<search(root,"her");
	cout<<"\nTest everywhere "<<search(root,"everywhere");
	cout<<"\nTest bo "<<search(root,"bo");
	cout<<"\nTest ywh "<<search(root,"ywh");

}

