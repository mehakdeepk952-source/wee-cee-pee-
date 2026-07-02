#include<iostream>
using namespace std;
using ll=long long;
const int N = 1e6;
const int MOD = 1e9 + 7;
#include<vector>
int solve(const vector<vector<int>>& grid,int n){
    int dp[n][n];
    int ways=0;
   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1) dp[i][j]=0;
            else if(i==0 && j==0) dp[i][j]=1;
            else{
                dp[i][j]=0;
                if(i>0) dp[i][j]=(dp[i][j]+dp[i-1][j])%MOD;
                if(j>0) dp[i][j]=(dp[i][j]+dp[i][j-1])%MOD;
            }
        }
    }
    return dp[n-1][n-1];
}
int main(){
    int n;
    cin>>n;

    vector<vector<int>> s(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char x;
            cin>>x;
            if(x=='*') s[i][j]=1;
            else s[i][j]=0;
        }
    }

    cout<<solve(s,n)<<endl;


}