#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v;
    vector<int>vans(n,INT_MAX);
    while(n--){
	int a;
	cin>>a;
	v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
	int j=i+1;
	vans[v[i]-1]=j;

    }
    for(int i=0;i<vans.size();i++){
	cout<<vans[i]<<" ";
    }
    return 0;
}
