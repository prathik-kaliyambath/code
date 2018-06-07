#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    while(n--){
	int temp;
	cin>>temp;
	v.push_back(temp);
    }
    int ans=0;
    sort(v.rbegin(),v.rend());
    for(auto u:v){
	if(u>=v[k-1]&&u>0)
	    ans++;
	else
	    break;
    }
    cout<<ans;
    return 0;
}
