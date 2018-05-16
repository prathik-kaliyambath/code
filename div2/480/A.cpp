#include <iostream>
#include <string>

using namespace std;


int main(){
    string s;
    cin>>s;
    int p=0,l=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='o')
            p++;
        else
            l++;
    }
    if(p==0)
        cout<<"YES";
    else if(l%p==0||l==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
