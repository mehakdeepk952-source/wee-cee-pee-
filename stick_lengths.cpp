#include<iostream>
using namespace std;
#include<vector>
using ll=long long;
#include<algorithm>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> length(n);
    for(ll i=0;i<n;i++){
        cin>>length[i];

    }
    sort(length.begin(),length.end());
    ll mid=n/2;
    ll cost=0;
    for(ll i=0;i<n;i++){
        cost+=abs(length[mid]-length[i]);
    }
cout<<cost;


    


}