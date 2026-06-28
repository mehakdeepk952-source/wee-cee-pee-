#include<iostream>
using ll = long long;
#include<vector>
#include<algorithm>
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
    ll n;
    cin>>n;
    vector<vector<ll>> s(n, vector<ll>(2));
   

    for(ll i=0;i<n;i++){
        cin >> s[i][0]>>s[i][1];
    }
   sort(s.begin(), s.end(), compare);
    
    ll count=1;
    ll end=s[0][1];
    for(ll i=1;i<n;i++){
        if(s[i][0]>=end){
            count++;
            end=s[i][1];


        }
    }
 

    
    cout<<count<<endl;

}