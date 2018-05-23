#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n,d;
    cin>>n>>d;
    long long int ans1=0;
    while(n--){
        char a;
        long long int b;
        cin>>a>>b;
        if(a=='-')
            b*=-1;
        if(d+b>-1)
            d+=b;
        else
            ans1++;
    }
    cout<<d<<" "<<ans1;
    return 0;
}

