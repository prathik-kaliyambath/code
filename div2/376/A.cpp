#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int ans=0,curr = 'a';
    for(int i=0;i<s.size();i++){
	int temp=0;
	temp=min(abs(s[i]-curr),abs(26-abs(s[i]-curr)));
	curr=s[i];
	ans+=temp;
    }
    cout<<ans;
    return 0;
}
