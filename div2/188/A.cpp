#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k,flag=0;
    cin>>n>>k;
    if(n%2==1)
	flag=1;
    long long int temp = (n/2+flag)-k;
    if(temp<0){
	cout<<0-temp*2;
    }
    else{
	cout<<1+(n/2-temp-!flag)*2;
    }
    return 0;
}
