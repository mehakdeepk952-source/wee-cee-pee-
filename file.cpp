#include<iostream>
#include<algorithm>
#include<vector>
using ll=long long;

using namespace std;
int main(){
    ll n,q;
    cin>>n>>q;
    vector<int> str(n);
    for(ll i=0;i<n;i++){
        cin>>str[i];

    }
    vector<vector<ll>> queries(q,vector<ll>(2));
    vector<ll> overlap(n,0);
    for(ll i=0;i<q;i++){
        cin>>queries[i][0]>>queries[i][1];
        queries[i][0]--;
        queries[i][1]--;
        int begin =queries[i][0];
        int end=queries[i][1];   
        for(int j=begin;j<=end;j++){
            overlap[j]+=1;
        }  
}

    
    sort(str.begin(),str.end());
    sort(overlap.begin(),overlap.end());
    ll ans=0;

    for(ll i=0;i<n;i++){
        ans+=str[i]*overlap[i];  
     
        
    }
    
    
    
cout<<ans;
}