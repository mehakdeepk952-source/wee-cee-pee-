#include<iostream>
using namespace std;
using ll=long long;
#include<vector>
#include<algorithm>
int main(){
    ll t;
    cin>>t;
    for(ll k=0;k<t;k++){
        ll n;
        cin>>n;
        ll c=0;
        vector<ll> a(n);
        ll prefix=0;;
        ll m=0;


        for(ll i=0;i<n;i++){
            cin>>a[i];
            prefix +=a[i];
            m=min(m,prefix);
        }
        
        
       
  
        cout<<prefix-2*m<<endl;
    }

}