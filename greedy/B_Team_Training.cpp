#include<iostream>
using namespace std;
#include<vector>
typedef long long ll;
#include<algorithm>
#include<cmath>


int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        for(ll j=0;j<n;j++){
            cin>>a[j];
        }
    ll count=0;
    sort(a.rbegin(),a.rend());
    ll size=0;
    for(ll j=0;j<n;j++){
         size++;
        if(size*a[j]>=x){
            count++;
            size=0;
        }
        
           
        
    }
     cout<<count<<endl;  
    }
    
    }