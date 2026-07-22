#include<iostream>
using namespace std;
#include<vector>
#include<string>
long long N=1e9; 

bool solve (int r,int c,int n,vector<string> grid,vector<vector<bool>>& visited ){
    if(r==1 && c==n-1) return true;
    visited[r][c]=true;
    for(int dr=-1;dr<=1;++dr){
        for(int dc=-1;dc<=1;dc++){
            int nr=r+dr;
            int nc=c+dc;
            if(nr>=0 && nr<2 && nc>=0 && nc<n && grid[nr][nc]=='0' && !visited[nr][nc]){
                if(solve(nr,nc,n,grid,visited)) return true;

            }
        }
    }
    return false;




}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
    int n;
    cin>>n;
    vector<vector<bool>> visited(2,vector<bool>(n,false));
   vector<string> grid(2);
   cin>>grid[0]>>grid[1];
   if(solve(0,0,n,grid,visited)){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }


}
}