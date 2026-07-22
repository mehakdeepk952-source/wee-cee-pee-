#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll=long long;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<ll> books(n);
    vector<bool> read(n,false);
    ll sum=0;
    
    for(ll i=0;i<n;i++){
        cin>>books[i];
        sum+=books[i];
    }
    sort(books.begin(),books.end());
    sum-=books[n-1];
    ll total_time;
    if(sum<=books[n-1]){
        total_time=2*books[n-1];
    }

    else{
        total_time=sum+=books[n-1];
    }
    cout<<total_time;
   }