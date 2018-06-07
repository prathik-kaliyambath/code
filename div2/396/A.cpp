#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int ans=s1.compare(s2)==0?-1:max(s1.size(),s2.size());
    cout<<ans;
    return 0;
}
