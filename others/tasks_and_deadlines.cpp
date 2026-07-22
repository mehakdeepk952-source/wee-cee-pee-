#include<iostream>
using ll =long long;
#include<vector>
#include<algorithm>
using namespace std;
bool compare(vector<ll>& a ,vector<ll>& b){
    if (a[0] == b[0]) {
        return a[1] < b[1];
    }
    return a[0] < b[0];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;

    cin>>n;
    vector<vector<ll>> s(n, vector<ll>(2));
    for(ll i=0;i<n;i++){
        cin>>s[i][0]>>s[i][1];
    }
    ll time=0;
    ll reward=0;
    sort(s.begin(),s.end(),compare);
    for(ll i=0;i<n;i++){
        time+=s[i][0];
     
            reward+=s[i][1]-time;


        }
        cout<<reward;
}
