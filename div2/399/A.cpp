#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>s;
    while(n--){
	int temp;
	cin>>temp;
	s.push_back(temp);
    }
    sort(s.begin(),s.end());
    long long int start=0,end=s.size()-1;
    while(s[start]==s[start+1])
	start++;
    while(s[end]==s[end-1])
	end--;
    if(end-start-1>0)
    cout<<end-start-1;
    else 
	cout<<0;
    return 0;
}
