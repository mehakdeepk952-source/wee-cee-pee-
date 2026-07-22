#include<iostream>
#include<vector>
#include<algorithm>
using ll=long long;
#include<cmath>
const int N = 1e6 + 5;
ll value[N];
bool ready[N];
using namespace std;
ll solve(ll x){
    if (x<=0) return 0;
   
    ll steps=1e9;
    if(ready[x]) return value[x];
    ll temp=x;
    while(temp>0){
        ll digit=temp%10;
        temp/=10;
        if(digit>0){
        steps=min(steps,1+solve(x-digit));}
    }
    value[x]=steps;
    ready[x]=true;
    return steps;
}
int main(){
    ll n;
    cin>>n;
    cout<<solve(n);

    
}