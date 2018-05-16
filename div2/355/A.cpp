#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,h,w=0;
  vector<int> v;
  cin>>n>>h;
  while(n--){
    int a;
    cin>>a;
    v.push_back(a);
  }
  for(int i=0;i<v.size();i++){
    if(v[i]>h){
      w+=2;
    }
    else
      w+=1;
  }
  cout<<w;
  return 0;
}
