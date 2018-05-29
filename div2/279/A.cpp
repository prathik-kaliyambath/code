#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,i=0;
    cin>>n;
    vector<int> p;
    vector<int> m;
    vector<int> s;
    while(n--){
	int a;
	cin>>a;
	i++;
	if(a==1)
	    p.push_back(i);
	else if(a==2)
	    m.push_back(i);
	else
	    s.push_back(i);
    }
    int s1=p.size(),s2=m.size(),s3=s.size();
    int smallsize = s1<=s2?(s1<=s3?s1:s3):(s2<=s3?s2:s3);
    if(smallsize<1)
    {
	cout<<0;
	return 0;
    }
    int j=0,k=0;
    i=0;
    cout<<smallsize<<'\n';
    for(int l=0;l<smallsize;l++){
	cout<<p[i++]<<" "<<m[j++]<<" "<<s[k++]<<'\n';
    }
    return 0;
}
