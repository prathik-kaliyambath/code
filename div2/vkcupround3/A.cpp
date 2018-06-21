#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    bool f1=false,f2=true;
    while(n--){
	int a,b;
	cin>>a>>b;
	if(a!=b){
	    f1=true;
	}
	v.push_back(make_pair(a,b));
    }
    for(auto it=v.begin()+1;it!=v.end();it++){
	if(it->first>(it-1)->first)
	    f2=false;
    
    }
    if(f1){
	cout<<"rated";
    }
    else if(f2){
	cout<<"maybe";
    }
    else{
	cout<<"unrated";
    }
    return 0;
}
