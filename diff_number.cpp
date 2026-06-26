#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
    vector<ll> a;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    ll ans=1;
    for(ll i=1;i<n;i++)
    {
        if(a[i]!=a[i-1] )
            ans++;
    }
    cout<<ans<<endl;

}