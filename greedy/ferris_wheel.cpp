#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;
int main(){
    ll n,x;
    cin>>n>>x;
    vector<ll> weight;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        weight.push_back(a);
    }
    sort(weight.begin(),weight.end());
    ll gondolas=0;
    ll i=0;
    ll j=n-1;
    while(i<j){
        if((weight[i]+weight[j])<=x ){
            gondolas++;
            i++;
            j--;
        }
        else {
            gondolas++;
            j--;
        }
    }
    if(i==j){
        gondolas++;
    }
    cout<<gondolas<<endl;

}