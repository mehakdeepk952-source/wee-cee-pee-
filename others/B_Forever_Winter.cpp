#include <iostream>
#include <vector>
using namespace std;
void solve() {
    int n,m;
    cin>>n>> m;
    vector<int> degree(n+1,0);
    vector<vector<int>> edge(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
    edge[u].push_back(v);
    edge[v].push_back(u);
    degree[u]++;
    degree[v]++;
    }
    vector<int> neighbors(n+1,0);
    for(int i=1;i<n+1;i++){
        if(degree[i]==1){
            int p=edge[i][0];
            neighbors[p]++;
        }
    }
    int x=0;
    int y=0;
    for(int i=1;i<n+1;i++){
        if(neighbors[i]>0){
            y=neighbors[i];
            break;
        }
    }
    for(int i=1;i<n+1;i++){
        if(neighbors[i]==y){
            x++;
        }
    }
    cout<<x<<" "<<y<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}