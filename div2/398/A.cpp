#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,currmax;
    cin>>n;
    currmax=n;
    set<int> s;
    while(n--){
	int temp;
	cin>>temp;
	s.insert(temp);
	if(temp==currmax){
	    while(!s.empty() and *s.rbegin()==currmax){
		cout<<*s.rbegin()<<" ";
		s.erase(*s.rbegin());
		currmax--;
	    }
	}
	else{
	    cout<<'\n';
	    continue;
	}
	cout<<"\n";
    }

    return 0;
}
