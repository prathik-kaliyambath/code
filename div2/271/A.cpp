#include <bits/stdc++.h>

using  namespace std;

int main(){
    char c;
    cin>>c;
    string s;
    cin>>s;
    string keys="qwertyuiopasdfghjkl;zxcvbnm,./";
    int k=0;
    unordered_map<char,int> m;
    for(auto u:keys){
	m[u]=k++;
    }
    int flag=1;
    if(c=='R')
	flag=flag*-1;
    for(auto u:s){
	cout<<keys[m[u]+flag];
    }
    return 0;
}
