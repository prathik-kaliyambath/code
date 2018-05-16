#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  unordered_set<char> s1;
  cin>>s;
  for(int i=0;i<s.size();i++){
    s1.insert(s[i]);
  }
  if(s1.size()%2==1)
    cout<<"IGNORE HIM!";
  else
    cout<<"CHAT WITH HER!";
  return 0;
}
