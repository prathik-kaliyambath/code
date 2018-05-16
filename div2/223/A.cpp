#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int>v;
  while(n--){
    int a;
    cin>>a;
    v.push_back(a);
  }
  int c=0,i=0,j=v.size()-1;
  int s=0,d=0;
  while(i<=j){
    if(c%2==0){
      s+=max(v[i],v[j]);
      v[i]>v[j]?i++:j--;
    }
    else{
      d+=max(v[i],v[j]);
      v[i]>v[j]?i++:j--;
    }
    c++;
  }
  cout<<s<<" "<<d;
  return 0;
}
