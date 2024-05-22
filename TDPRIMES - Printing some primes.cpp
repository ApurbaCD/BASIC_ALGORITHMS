#include<bits/stdc++.h>
using namespace std;
void ans(){
    int n=10000;
    vector<bool>is_prime(n+1,true);
    is_prime[0]=false;is_prime[1]=false;
    for(int i=2;i*i<=n;i+=2){
        
        if(is_prime[i]==true){
            for(int j=2;i*j<=n;j++){
                is_prime[j*i]=false;
            }
        }
        if(i==2){
            i=1;
        }
    }
    for(int i=0;i<=n;i++){
        if(is_prime[i]){
            cout<<i<<" ";
        }
        else {
            cout<<0<<" ";
        }
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