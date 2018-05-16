#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long int n,k;
    cin>>n>>k;
    int temp = n;
    vector<int>v;
    while(temp--){
        int t;
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    if(k==0&&v[k]==1)
        cout<<-1;
    else if(k==0)
        cout<<v[k]-1;
    else if(k==n){
        cout<<v[k-1];
    }
    else if(v[k]-v[k-1]>1){
        cout<<v[k-1];
    }
    else if(v[k]-v[k-1]==1)
        cout<<v[k-1];
    else
        cout<<-1;
    return 0;
}
