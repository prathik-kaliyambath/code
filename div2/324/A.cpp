#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int n,t;
    cin>>n>>t;
    if(t<10){
	for(int i=0;i<n;i++){
	    cout<<t;
	}
	return 0;
    }
    if(n==1&&t==10){
	cout<<-1;
	return 0;
    }
    cout<<10;
    n-=2;
    while(n--){
	cout<<0;
    }
    return 0;
}
