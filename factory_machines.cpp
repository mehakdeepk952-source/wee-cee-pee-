#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;
int main(){
    ll n,t;
    cin>>n>>t;
    vector<ll> k(n);
    for(ll i=0;i<n;i++){
        cin>>k[i];
    }
    sort(k.begin(),k.end());
   ll l=0;
   ll r=k[0]*t;
   while(l<r){
    ll mid=(l+r)/2;
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=mid/k[i];
    }
    if(sum>=t){
        r=mid;
    }
    else{
        l=mid+1;
    }
   }
    cout<<l<<endl;

}