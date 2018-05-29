#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    string s="abcdefghijklmnopqrstuvwxyz";
    s=s.substr(0,k);
    for(int i=0;i<(n-k);i++){
	s+=s[s.size()-2];
    }
    cout<<s;
    return 0;
}
