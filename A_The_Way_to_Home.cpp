#include<iostream>
using namespace std;
#include<string>
#include<vector>
int solve(int position,int n,int d,string path,vector<bool>& visited){

    if(position>=n-1) return 0;
    if (path[position] == '0') return -1;
    visited[position]=true;
    int jumps=1e9;
    for(int i=d;i>=1;i--){
        int x=position+i;
        if(x>=0 && position<=n-1 && path[x] != '0' && visited[x]== false){
            int result=solve(x,n,d,path,visited);
            if(result != -1){
                jumps=min(jumps,1+result);
            }
        }
        
    }
    visited[position]=false;
    return (jumps==1e9) ? -1 : jumps;
}
int main(){
    int n,d;
    cin>>n>>d;
    string path;
    cin>>path;
    vector<bool> visited(n,false);
    cout<<solve(0,n,d,path,visited);
   

}