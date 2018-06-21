#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    auto it1=s1.begin();
    auto it2=s2.end();
    while(it1!=s1.end()&&it2!=s2.begin()){
	if(*it1!=*(it2-1)){
	    cout<<"NO";
	    return 0;
	}
	it1++;
	it2--;
    }
    cout<<"YES";
    return 0;
}
