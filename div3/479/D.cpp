#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    int t=n;
    vector<int> v;
    while(t--){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    return 1;
}
