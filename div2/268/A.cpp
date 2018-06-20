#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int f=2;
    unordered_set<int> s;
    while(f--){
	int k;
	cin>>k;
	while(k--){
	    int a;
	    cin>>a;
	    s.insert(a);
	}
    }
    if(s.size()>=n){
	cout<<"I become the guy.";
    }
    else{
	cout<<"Oh, my keyboard!";
    }
    return 0;
}
