#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,ans=0;
  cin>>n;
  string s;
  cin>>s;
  char curr=s[0];
  for(int i=1;i<n;i++){
    if(curr==s[i]){
      ans++;
    }
    else{
      curr=s[i];
    }
  }
  cout<<ans;
  return 0;
}
