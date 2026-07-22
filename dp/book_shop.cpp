#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int solve(const vector<int>& price,vector<int>& pages,int x,int n){
    vector<vector<int>> dp(n+1,vector<int> (x+1,0));
    for(int i=1;i<n+1;i++){
        for(int j=1;j<x+1;j++){
            int pick=(j>=price[i-1] ? dp[i-1][j-price[i-1]]+pages[i-1] :0);
            int skip=dp[i-1][j];
            dp[i][j]=max(pick,skip);

        }
    }
    return dp[n][x];
    


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n>>x;
    vector<int> price(n);
    vector<int> pages(n);
    for(int i=0;i<n;i++){
        cin>>price[i];

    }
     for(int i=0;i<n;i++){
        cin>>pages[i];

    }
    cout<<solve(price,pages,x,n);





}