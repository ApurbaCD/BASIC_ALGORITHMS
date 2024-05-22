
#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
int sum=0,sum1=0,sum2=0;

int ans(int i,int j,int n){
    if(i==n-1&&j!=n-1){
       sum+=a[i][j+1];
       ans(i,j+1,n);
    }
    if(j==n-1&&i!=n-1){
       sum+=a[i+1][j];
       ans(i+1,j,n);
    }
    if(i==n-1&&j==n-1){
        return sum+a[i][j];
    }
    if(i+1<n&&(j+1<n)){
    sum=sum+min(a[i+1][j],a[i][j+1]);
    if(a[i+1][j]>=a[i][j+1]){
        ans(i,j+1,n);
    }
    else{
        ans(i+1,j,n);
    }
    }
    return sum;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t,n;
    cin>>t>>n;
    a[n][n];
    while(t--){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               cin>>a[i][j];
            }
        }
        sum=a[0][0];
        cout<<ans(0,0,n);
    }
}