#include<iostream>
using namespace std;
using ll= long long;
#include<vector>
#include<algorithm>
vector<ll> convertToVector(ll a ){
    vector<ll> arr;
    if(a==0){
        arr.push_back(0);
        return arr;
    }
    while(a>0){
        arr.push_back(a%10);
        a/=10;

    }
    reverse(arr.begin(),arr.end());
    return arr;
}
ll solve( ll& a , ll& b){
    ll ans=0;
    vector<ll> x=convertToVector(a);
    vector<ll> y=convertToVector(b);
    ll n=x.size();
   
    ll i=0;
    while(i<n && x[i]==y[i]){
        ans+=2;
        i++;
    }

    while(i<n){
        if(abs(x[i]-y[i])>1){
           return ans;
        }
        else{
            ans++;
            i++;
            while(i<n && x[i]==9 && y[i]==0){
            ans++;
            i++;
            }
            return ans;
        }
    }
        return ans;
    }


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        cout<<solve(a,b)<<endl;

    }
}