#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<vector<int>> grid(n+1, vector<int>(n+1, 0));
    vector<vector<int>> prefix_sum(n+1, vector<int>(n+1, 0));
    vector<int> ans(q);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char c;
            cin>>c;
            grid[i][j] = (c == '*') ? 1 : 0;
            prefix_sum[i][j] = prefix_sum[i-1][j]+prefix_sum[i][j-1]-prefix_sum[i-1][j-1]+grid[i][j];
        }

    }
    for(int i=0;i<q;i++){
        int y1,x1,y2,x2;
        cin>>y1>>x1>>y2>>x2;
        ans[i]= prefix_sum[y2][x2]-prefix_sum[y1-1][x2]-prefix_sum[y2][x1-1]+ prefix_sum[y1-1][x1-1];
    }
    for(int x : ans){
        cout<<x<<endl;
    }

}