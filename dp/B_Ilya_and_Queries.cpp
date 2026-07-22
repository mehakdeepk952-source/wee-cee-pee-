#include<iostream>
using namespace std;
#include<vector>
#include<string>

int main(){
    string a;
    cin>>a;
    int n;
    cin>>n;
    vector<vector<int>> queries(n,vector<int>(2));
    for(int i=0;i<n;i++){
        cin>>queries[i][0]>>queries[i][1];
        queries[i][0]-=1;
        queries[i][1]-=1;
        
    }
    int length=a.length();
    vector<int> dp(length-1,0);
    
        for(int j=0;j<length-1;j++){
            if(a[j]==a[j+1]){
                dp[j]=  j!=0 ? dp[j-1]+1 : dp[j]+1;

            }
            else{
                if(j!=0){
                dp[j]=dp[j-1];}
            }
        }
  /*       if (length > 1) {
        dp[length - 1] = dp[length - 2];
    } */
        for(int i=0;i<n;i++){
            if(queries[i][0]==0){
                cout<<dp[queries[i][1]-1]<<endl;
            }
            else{
            cout<<dp[queries[i][1]-1]-dp[queries[i][0]-1]<<endl;
            }
         
        }
        


}