#include<bits/stdc++.h>

using namespace std;

void print_res(string s){
        if (s.size() == 2 && s[0] >= s[1]) {
            cout << "NO" << '\n';
	}
	else{
		cout<<"YES"<<'\n';
		cout<<2<<'\n';
		cout<<s[0]<<" "<<s.substr(1)<<"\n";
	}
	return;
}

int main(){
	int q;
	cin>>q;
	while(q--){
		int k;
		cin>>k;
		string s;
		cin>>s;
		print_res(s);
	}
	return 0;

}
