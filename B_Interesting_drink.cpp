#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;
int main(){
    ll n;
    cin >> n;
    vector<ll> x(n);
    for(ll i = 0; i < n; i++){
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    ll q;
    cin>>q;
    for(ll i=0;i<q;i++){
        ll m;
        cin>>m;
        ll l=0;
        ll r=n-1;
        ll count=0;
        while(l<=r){
            ll mid=(l+r)/2;
            if(x[mid]>m){
                r=mid-1;
            }
            else{
                l=mid+1;
                count=mid+1;
            }
                
            }
            cout<<count<<endl;
        }
      
    }
