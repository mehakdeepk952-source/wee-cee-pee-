#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;
int main(){
    ll n,q;
    cin>>n>>q;
    vector<ll> x(n);
    for(ll i=0;i<n;i++){
        cin>>x[i];
    }
    vector<ll> a(q),b(q);
    for(ll i=0;i<q;i++){
        cin>>a[i]>>b[i];
    }
    vector<ll> prefix(q);
    prefix[0]=x[0];
    for(ll i=1;i<q;i++){
        prefix[i]=prefix[i-1]+x[i];
    }
    vector<ll> ans(q);
    for(ll i=0;i<q;i++){
        if(a[i]==b[i]){
            ans[i]=x[a[i]-1];
        }
        else{
        ans[i]=prefix[b[i]-1]-prefix[a[i]-1]+x[a[i]-1];}
    }
    for ( ll x : ans){
        cout<<x<<endl;
    }
}
