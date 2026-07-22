#include <iostream>
#include <vector>
#include<algorithm>
using ll=long long;
ll mod=998244353;

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(ll p=0;p<t;p++){
    int n;
    cin>>n;
    vector<ll> x(n);
    for(int i=0;i<n;i++){
        ll k;
        cin>>k;
        x[i]=k;
    }
  ll c1=0;
  ll c2=0;
  ll ans=0;
  for(ll i=0;i<n;i++){
    if(x[i]==1){
        c1=(c1+1)%mod;}
        else if(x[i]==2){
            c2=(c2*2+c1)%mod;

        }
        else {
            ans=(ans+c2)%mod;
        }
    }
    cout<<ans<<endl;
  }
}
