#include<iostream>
using ll = long long;
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
const int N = 1e6;
const int MOD = 1e9 + 7;
bool ready[N];
ll value[N];
ll solve(int n){
    if (n == 0) return 1;
    if (n < 0) return 0;
    if(ready[n]) return value[n];
    ll ways=0;
    for(ll i=1;i<=6;i++){
       ways=( ways+solve(n-i))%MOD;

    }
    value[n]=ways%MOD;
    ready[n]=true;
    return ways;


}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);

}