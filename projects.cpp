#include <iostream>
#include <vector>
#include<algorithm>
using ll=long long;
using namespace std;
bool compare(const vector<ll>& p1,const vector<ll>& p2){
    return p1[1]<p2[1];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    ll n;
    cin>>n;
    vector<vector<ll>> projects(n,vector<ll> (3));
    vector<ll> end_times(n);
    vector<ll> dp(n + 1, 0);
    
    for(ll i=0;i<n;i++){
        cin>>projects[i][0]>>projects[i][1]>>projects[i][2];
       
    }
    sort(projects.begin(),projects.end(),compare);
    for(ll i=0;i<n;i++){
     end_times[i]=projects[i][1];
    }
    for(ll i=1;i<n+1;i++){
        ll skip=dp[i-1];
        ll take=projects[i-1][2];
        auto it=lower_bound(end_times.begin(),end_times.end(),projects[i-1][0]);
        ll index=it-end_times.begin();
        if(index>0){
            take+=dp[index];
        }
        dp[i]=max(skip,take);
    }
    cout<<dp[n];


}