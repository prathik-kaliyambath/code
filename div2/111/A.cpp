#include<bits/stdc++.h>

using  namespace std;

int main(){
    int n,s=0;
    cin>>n;
    vector<int> v;
    while(n--){
	int a;
	cin>>a;
	s+=a;
	v.push_back(a);
    }
    sort(v.rbegin(),v.rend());
    int mine=0,k=0;
    for(auto u:v){
	mine+=u;
	s-=u;
	k++;
	//cout<<mine<<" "<<s<<" "<<k<<"\n";
	if(mine>s)
	{
	    cout<<k;
	    break;
	}
    }
    return 0;
}
