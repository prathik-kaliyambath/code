#include <bits/stdc++.h>

using namespace std;


int main(){
    vector<int> v;
    vector<int> cv;
    int n,w;
    cin>>n>>w;
    int cum = 0;
    while(n--){
        int a;
        cin>>a;
        cum+=a;
        cv.push_back(cum);
        v.push_back(a);
    }
    int ans=w;
    bool flag=true;
    auto it= v.begin();
    for(it=v.begin();it!=v.end();it++){
       if((*(it)*(*(it+1)))<0)
           break;
    }
    int s=0;
    for(auto k=it;k>=v.begin();k--){
        s+=*k;
    }
    if(it==v.end())
        it--;
    if(*it>0)
        cout<<(w-s)+1;
    else
        cout<<w-s-1;
    return 0;

}
