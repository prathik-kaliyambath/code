#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> pairvec;
    while(n--){
	int temp;
	cin>>temp;
	pairvec.push_back(temp);
    }
    int i=0;
    vector<int>::iterator it;
    for(it = pairvec.begin();it!=pairvec.end();it++){
	if(i!=0&&i!=pairvec.size()-1)
	    cout<<min(abs(*it-*(it-1)),abs(*it-*(it+1)))<<" "<<max(abs(*it-pairvec[0]),abs(*it-pairvec[pairvec.size()-1]))<<'\n';
	else if (i==0)
	    cout<<abs(*it-*(it+1))<<" "<<abs(*it-pairvec[pairvec.size()-1])<<'\n';
	else
	    cout<<abs(*it-*(it-1))<<" "<<abs(*it-pairvec[0])<<'\n';
	i++;
    }
    return 0;
}
