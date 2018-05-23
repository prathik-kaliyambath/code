#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,ans=0;
    vector<pair<int,int> >v;
    cin>>n;
    while(n--){
	int a,b;
	cin>>a>>b;
	v.push_back(make_pair(a,b));
    }
    vector<pair<int,int> >::iterator it;
    vector<pair<int,int> >::iterator iit;
    for(it=v.begin();it!=v.end();it++){
	for(iit=it+1;iit!=v.end();iit++){
	    if(it->first==iit->second)
		ans++;
	    if(it->second==iit->first)
		ans++;
	}
    }
    cout<<ans;
    return 0;
}
