#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;
int solve(const string& a,const string& b){
    int n=a.length();
    int m=b.length();
    vector<vector<int>> dp(n+1,vector<int> (m+1));
    for (int i = 0; i <= n; i++) dp[i][0] = i;
    for(int j = 0; j <= m; j++) dp[0][j] = j;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if (a[i-1]==b[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
            }

        }
    }
    return dp[n][m];
    

    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    string a,b;
    cin>>a>>b;
    cout<<solve(a,b);

    


}