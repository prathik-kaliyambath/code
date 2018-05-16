#include <iostream>

using namespace std;


int main(){
    int n;
    cin>>n;
    int min,max;
    min=max=2*(n/7);
    if(n%7>5){
        min+=1;
        max+=2;
    }
    else{
        n=n%7;
        if(n>2){
            max+=2;
        }
        else{
            max+=n;
        }
    }
    cout<<min<<" "<<max;
    return 0;
}
