#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,b,d;
    cin>>n>>b>>d;
    vector<int>v;
    while(n--){
	int a;
	cin>>a;
	v.push_back(a);
    }
    int ans=0,waste=0;
    for(int i =0;i<v.size();i++){
	if(v[i]>b)
	    continue;
	waste+=v[i];
	if(waste>d)
	{
	    ans++;
	    waste=0;
	}
    }
    cout<<ans;
    return 0;
}
