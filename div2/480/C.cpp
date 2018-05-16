#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    while(n--){
        int t;
        cin>>t;
        v.push_back(t);
    }
    unordered_map<int,int> m;
    for(auto u: v){
        int t = u-(k-1);
        if(t<0) t=0;
        int f= t;
        cout<<"U: "<<u<<"\n";
        if(!m.count(u)&&!m.count(t)){
            while(t<=u){
                cout<<t<<"mapii "<<f<<"\n";
                m[t]=f;
                t++;
            }
        }
        else{
            int k1= m[t];
            int z=u;
            if(k1+k>=u)
                while(z<(k1+k)){
                    cout<<z<<"mapooo "<<f<<"\n";
                    m[z]=f;
                    z++;
                }
            else{
                    m[u]=u;
                }
            }
        }
    }
    for(auto u:v){
        cout<<m[u]<<"  ";
    }
    return 0;
}
