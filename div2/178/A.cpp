#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n--){
	int a;
	cin>>a;
	v.push_back(a);
    }
    int m;
    cin>>m;
    while(m--){
	int a,b;
	cin>>a>>b;
	a--;
	b--;
	int temp= v[a];
	if(a>0){
	    v[a-1]+=b;
	}
	if(a<v.size()-1){
	   v[a+1]+=(v[a]-b-1);
	}
        v[a]=0;
    }
    for(int i=0;i<v.size();i++){
	cout<<v[i]<<"\n";
    }
    return 0;
}
