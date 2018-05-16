#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int n;
    unordered_map<string,int> m;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.length()-1;i++){
        string t="";
        t+=s[i];
        t+=s[i+1];
        m[t]++;
    }
    int max=(m.begin())->second;
    string mk=(m.begin())->first;
    for(auto it=m.begin();it!=m.end();it++)
    {
        if(max<it->second){
            max=it->second;
            mk=it->first;
        }
    }
    cout<<mk;
    
}

