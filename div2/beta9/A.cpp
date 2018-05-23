#include <bits/stdc++.h>

using namespace std;

int main(){
    int a1,b1;
    cin>>a1>>b1;
    int ans= 1+(6-(max(a1,b1)));
    int a=0,b=0;
    switch(ans){
	case 0:
	    a=0,b=1;
	    break;
	case 1:
	    a=1,b=6;
	    break;
	case 2:
	    a=1,b=3;
	    break;
	case 3:
	    a=1,b=2;
	    break;
	case 4:
	    a=2,b=3;
	    break;
	case 5:
	    a=5,b=6;
	    break;
	case 6:
	    a=1,b=1;
	    break;
    }
    cout<<a<<'/'<<b;
    return 0;
}
