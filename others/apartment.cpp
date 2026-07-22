#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> a;
    vector<ll> b;
    vector<ll> c;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    
    for(ll i=0;i<m;i++){
        ll x;
        cin>>x;
        b.push_back(x);
    }
    sort(b.begin(),b.end());
    ll i=0,j=0;
    ll ans=0;
    while(i<n && j<m){
        
            if(abs(a[i]-b[j])<=k){
                ans++;
                i++;
                j++;
            }
            else if(b[j]-a[i]>k){
                i++;
            }
            else{
                j++;
            }
        }
    cout<< ans <<endl;
    
}

