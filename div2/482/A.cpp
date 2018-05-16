#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    bool flag=true;
    long long int m=n+1;
    if(m%2==0)
        cout<<m/2;
    else
        cout<<n+1;
    return 0;
}
