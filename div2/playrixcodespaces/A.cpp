#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int curr =0;
    while(curr<=d){
	curr+=t;
	n-=k;
    }
    if(n>0)
	cout<<"YES";
    else
	cout<<"NO";
    return 0;
}
