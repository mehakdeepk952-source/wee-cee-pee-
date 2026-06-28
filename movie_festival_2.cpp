#include<iostream>
using ll = long long;
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
bool compare(vector<ll> a ,vector<ll> b){
    if (a[1] == b[1]) {
        return a[0] < b[0];
    }
    return a[1] < b[1];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>> s(n, vector<ll>(2));
    multiset<ll> end_times;
    for(ll i = 0; i < k; i++) {
        end_times.insert(0);
   
    }
    for(ll i=0;i<n;i++){
        cin >> s[i][0]>>s[i][1];
    }
   sort(s.begin(), s.end(), compare);
   ll count=0;
   for(ll i=0;i<n;i++){
    ll start=s[i][0];
    ll end=s[i][1];
    auto time = end_times.upper_bound(start);
    if(time!=end_times.begin()){
        --time;
        end_times.erase(time);
        end_times.insert(end);
        count++;




    }
    }
   

cout<<count<<endl;
}