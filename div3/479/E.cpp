#include<iostream>
#include <vector>
using namespace std;
const int N=200*1000+1;
vector <int> list;
vector<int> v[N];
int deg[N];
bool touched[N];
void dfs(int k){
    touched[k]=true;
    list.push_back(k);
    for(auto it: v[k]){
        if(!touched[it])
        dfs(it);
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i =0;i<m;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
        deg[a]++;
        deg[b]++;
    }
    int ans=0;
    for(int i =0;i<n;i++){
        if(!touched[i]){
            list.clear();
            dfs(i);
            bool fin= true;
            for(auto u: list){
                if(deg[u]!=2){
                    fin=fin&&false;
                }
            }
            if(fin)++ans;
        }
    }
    cout<<ans;
    return 0;
}
