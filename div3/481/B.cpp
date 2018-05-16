#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    int k=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='x'){
            k++;
        if(k>=3)
        {
            ans++;
        }
        }
        if(s[i]!='x')
            k=0;
    }
    cout<<ans;
    return 0;
}
