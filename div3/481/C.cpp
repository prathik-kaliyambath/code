#include <iostream>
#include <vector>

using namespace std;

vector <long long int> v;
vector <long long int> u;
vector <long long int> lm;
void bs(long long int l){
    int min = 0;
    int max = v.size()-1;
    while(min<=max){
        int mid = (min+max)/2;
        if(l==v[mid])
        {
            cout<<mid+1<<" "<<u[mid]<<"\n";
            return;
        }
        else if(v[mid]>l&&v[mid-1]<l)
        {
            cout<<mid+1<<" "<<(l-v[mid-1])<<"\n"; 
            return;
        }
        else if(v[mid]<l&&v[mid+1]>l){
            cout<<mid+2<<" "<<(l-v[mid])<<"\n"; 
            return;
        }
        else{
            if(v[mid]>l)
                max=mid-1;
            else
                min=mid+1;
        }
    }
    cout<<1<<" "<<l<<'\n';
}

int main(){
    long long int m,n;
    cin>>n>>m;
    long long int cum=0;
    while(n--){
        long long int a;
        cin>>a;
        cum+=a;
        u.push_back(a);
        v.push_back(cum);
    }
    while(m--){
        long long int a;
        cin>>a;
        lm.push_back(a);
    }
    for(auto bla:lm){
        bs(bla);
    }
}
