#include <bits/stdc++.h>

using namespace std;

int main(){
  string su,sl;
  cin>>su>>sl;
  transform(su.begin(), su.end(), su.begin(), ::toupper);
  transform(sl.begin(), sl.end(), sl.begin(), ::toupper);
  long long int a=su.compare(sl);
  if(a==0)
    cout<<0;
  else
    cout<<a/abs(a);
  return 0;
}
