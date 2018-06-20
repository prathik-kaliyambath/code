#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    set<char> s1;
    for(auto k:s){
	if(isalpha(k))
	s1.insert(tolower(k));
    }
    if(s1.size()==26)
	cout<<"YES";
    else
	cout<<"NO";
    return 0;
}
