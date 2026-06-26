#include <iostream>
#include<vector>
typedef long long ll;
using namespace std;
#include<algorithm>
#include<cmath>

int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> p(n);
        for(ll j=0;j<n;j++){
            ll s;
            cin>>s;
            a[j]=s;
             p[j] = (j == 0) ? a[0] : p[j-1] + a[j];
            
            }
         ll m=a[0];
        for(ll k=0;k<n;k++){
            ll height=0;
            height=min(m,(p[k]/(k+1)));
            m=height;
            cout<<height<<" ";
           
            
        }
        cout<<endl;
        

        
    }

}