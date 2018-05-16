#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    cin>>n>>m;
    int A[101][101],B[101][101];
    memset(B, 0, sizeof(B[0][0]) * 101 * 101);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char a;
            int b;
            cin>>a;
            if(a=='.') b=9;
            else if(a=='*') b=10;
            else b= (int)a-48;
            A[i][j]=b;
            if(A[i][j]==9||A[i][j]==10)
                B[i][j]=A[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(B[i][j]==10){
                if(i==0){
                    if(j==0){
                        if(B[i+1][j]==9||B[i][j+1]==9||B[i+1][j+1]==9){
                            cout<<"NO";
                            return 0;
                        }
                        else{
                            B[i+1][j]++;
                            B[i][j+1]++;
                            B[i+1][j+1]++;
                        }
                    }
                    else if(j==m-1){
                        if(B[i+1][j]==9||B[i][j-1]==9||B[i+1][j-1]==9){
                            cout<<"NO";
                            return 0;
                        }
                        else{
                            B[i+1][j]++;
                            B[i][j-1]++;
                            B[i+1][j-1]++;
                        }
                    }
                    else{
                        if(B[i+1][j]==9||B[i][j+1]==9||B[i][j-1]==9||B[i+1][j+1]==9||B[i+1][j-1]==9){
                            cout<<"NO";
                            return 0;
                        }
                        else{
                            B[i+1][j]++;
                            B[i][j+1]++;
                            B[i][j-1]++;
                            B[i+1][j+1]++;
                            B[i+1][j-1]++;
                        }
                    }
                }
                else if(i==n-1){
                    if(j==0){
                        if(B[i-1][j]==9||B[i][j+1]==9||B[i-1][j+1]==9){
                            cout<<"NO";
                            return 0;
                        }
                        else{
                            B[i-1][j]++;
                            B[i][j+1]++;
                            B[i-1][j+1]++;
                        }

                    }
                    else if(j==m-1){
                        if(B[i-1][j]==9||B[i][j-1]==9||B[i-1][j-1]==9){
                            cout<<"NO";
                            return 0;
                        }
                        else{
                            B[i-1][j]++;
                            B[i][j-1]++;
                            B[i-1][j-1]++;
                        }

                    }
                    else{
                        if(B[i-1][j]==9||B[i][j+1]==9||B[i][j-1]==9||B[i-1][j+1]==9||B[i-1][j-1]==9){
                            cout<<"NO";
                            return 0;
                        }
                        else{
                            B[i-1][j]++;
                            B[i][j+1]++;
                            B[i][j-1]++;
                            B[i-1][j+1]++;
                            B[i-1][j-1]++;
                        }
                    }
                } 
                else{
                    if(j==0){
                        if(B[i-1][j]==9||B[i][j+1]==9||B[i-1][j+1]==9||B[i+1][j]==9||B[i][j+1]==9||B[i+1][j+1]==9){
                            cout<<"NO";
                            return 0;
                        }
                        else{
                            B[i-1][j]++;
                            B[i][j+1]++;
                            B[i-1][j+1]++;
                            B[i+1][j]++;
                            B[i+1][j+1]++;
                        }
                    }
                    else if(j==m-1){
                        if(B[i-1][j]==9||B[i][j-1]==9||B[i-1][j-1]==9||B[i+1][j]==9||B[i][j-1]==9||B[i+1][j-1]==9){
                            cout<<"NO";
                            return 0;
                        }
                        else{
                            B[i-1][j]++;
                            B[i][j-1]++;
                            B[i-1][j-1]++;
                            B[i+1][j]++;
                            B[i+1][j-1]++;
                        } 
                    }
                    else{
                        if(B[i+1][j]==9||B[i][j+1]==9||B[i][j-1]==9||B[i-1][j]==9||B[i-1][j-1]==9||B[i+1][j+1]==9||B[i+1][j-1]==9||B[i-1][j+1]==9){
                            cout<<"NO";
                            return 0;
                        }
                        else{
                            B[i+1][j]++;
                            B[i][j+1]++;
                            B[i][j-1]++;
                            B[i-1][j]++;
                            B[i-1][j-1]++;
                            B[i+1][j+1]++;
                            B[i-1][j+1]++;
                            B[i+1][j-1]++;
                        }
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]!=B[i][j]){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}
