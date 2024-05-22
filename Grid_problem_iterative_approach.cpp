//grid problem with dp (iterative approach )
#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
int dp[1001][1001];
int mx=1e9+7;
void ans(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>a[i][j];
      }
    }
    dp[n+1][m+1];
    for(int i=0;i<=m;i++){
      dp[n][i]=mx;
    }
    for(int i=0;i<=n;i++){
      dp[i][m]=mx;
    }
    dp[n][m-1]=dp[n-1][m]=0;
    for(int i=n-1;i>=0;i--){
      for(int j=m-1;j>=0;j--){
        dp[i][j]=a[i][j]+ min((dp[i+1][j]),(dp[i][j+1]));
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cout<<dp[i][j]<<" ";
      }
      cout<<"\n";
    }
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}