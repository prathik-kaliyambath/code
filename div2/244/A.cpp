#include<bits/stdc++.h>

using namespace std;

int main(){
    int p=0,c=0;
    int n;
    cin>>n;
    while(n--){
	int a;
	cin>>a;
	if(a==-1){
	    if(p>0){
		p--;
	    }
	    else{
		c++;	
	    }
	}
	else{
	    p+=a;
	}
    }
    cout<<c;
    return 0;
}
