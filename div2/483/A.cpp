#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> v;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    v.size()%2==0?cout<<v[v.size()/2-1]:cout<<v[v.size()/2];
    return 0;
}
