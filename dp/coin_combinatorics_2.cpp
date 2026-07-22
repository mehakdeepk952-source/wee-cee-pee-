#include<iostream>
using namespace std;
using ll=long long;
const int N = 1e6;
const int MOD = 1e9 + 7;
#include<vector>

int main(){
     ll n,k;
    cin>>n>>k;
    vector<ll> coins(n);
    for(ll i=0;i<n;i++){
        cin>>coins[i];
            }
    vector<int> dp(k+1,0);
    dp[0]=1;
    for(int c:coins){
        for(int i=c;i<=k;i++){
            dp[i]=(dp[i-c]+dp[i])%MOD;

        }
    }
    cout<<dp[k];

}