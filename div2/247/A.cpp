#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> cal(4,0);
    for(int i=0;i<4;i++){
	cin>>cal[i];
    }
    int ans=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
	ans+=cal[s[i]-49];
    }
    cout<<ans;
    return 0;
}
