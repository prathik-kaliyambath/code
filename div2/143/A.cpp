#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,ans=0;
  cin>>n;
  while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c>1)
      ans++;
  }
  cout<<ans;
  return 0;
}
