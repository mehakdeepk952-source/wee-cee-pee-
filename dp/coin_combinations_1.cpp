#include<iostream>
using namespace std;
using ll=long long;
#include<vector>
const int N = 1e6;
const int MOD = 1e9 + 7;
bool ready[N];
ll value[N];
ll solve(int n,vector<ll>& coins){
 if(n==0) return 1;
 if(n<0) return 0;
 if(ready[n]) return value[n];
 ll ways=0;
for (ll c : coins) {
   ways=(ways+solve(n-c,coins))%MOD;

}
value[n]=ways%MOD;
ready[n]=true;
return ways;
}


int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll> coins(n);
    for(ll i=0;i<n;i++){
        cin>>coins[i];
        
    }
    cout<<solve(k,coins);

}
