#include <bits/stdc++.h>

using namespace std;

int main(){
    int i=4;
    set<long long int>s;
    while(i--){
	long long int a;
	cin>>a;
	s.insert(a);
    }
    cout<<4-s.size();
    return 0;
}
