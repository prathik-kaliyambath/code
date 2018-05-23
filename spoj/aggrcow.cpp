#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    vector<long long int>v;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        while(n--){
            long long int k;
            cin>>k;
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        long long int min=INT_MAX;
        
        cout<<min;
        v.clear();
    }
    // your code goes here
    return 0;
}
