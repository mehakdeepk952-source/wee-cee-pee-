#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        
        ll n,k;
        cin>>n>>k;
        vector<ll> a(k);
        for(ll j=0;j<k;j++){
            cin>>a[j];
            
        }
        sort(a.begin(),a.end());
        ll ans=0;
        for(ll p=0;p<k-1;p++){
            ans+=(2*a[p]-1);
        }
        cout<<ans<<endl;
    }

}