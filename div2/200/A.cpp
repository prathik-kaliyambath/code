#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,ans=0;
  string last="---";
  cin>>n;
  while(n--){
    string curr;
    cin>>curr;
    if(last=="---")
    {
      ans++;
    }
    else{
      if(curr[0]==last[1]){
        ans++;
      }
    }
    last=curr;
  }
  cout<<ans;
  return 0;
}
