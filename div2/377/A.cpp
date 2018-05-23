#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c=0;
    int temp = a%10;
    while(temp!=b&&temp!=0){
	c++;
	temp=a*(c+1);
	temp=temp%10;
    }
    c++;
    cout<<c;
    return 0;
}
