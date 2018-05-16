#include <bits/stdc++.h>

using namespace std;

int main(){
  int A[5][5],row,col;
  for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
    {
      cin>>A[i][j];
      if(A[i][j]==1){
        row=i;
        col=j;
      }
    }
  cout<<abs(row-2)+abs(col-2);
  return 0;
}
