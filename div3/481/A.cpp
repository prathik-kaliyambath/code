#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<int,int> s;
    int n;
    vector<int> v;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        v.push_back(t);
    }
    for(auto it=v.end()-1;it>=v.begin();it--){
        s[*it]++;
    }
    cout<<s.size()<<"\n";
    for(auto it = v.begin();it!=v.end();it++){
        if(s[*it]>1)
            s[*it]--;
        else
            cout<<*it<<" ";
    }
    return 0;
}
