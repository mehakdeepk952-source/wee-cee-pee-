#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> edge(n + 1);
        for (int i = 0; i < n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            edge[u].push_back(v);
            edge[v].push_back(u);
        }
        vector<int> parent(n + 1, 0);
        vector<int> order;
        vector<int> s = {1};
        parent[1] = 0;
        while (!s.empty()) {
            int u=s.back();
            s.pop_back();
            order.push_back(u);
            for (int v:edge[u]) {
                if (v!=parent[u]) {
                    parent[v] = u;
                    s.push_back(v);
                }
            }
        }
        vector<long long> leaves(n+1,0);
        for (int i = n - 1; i >= 0; --i) {
            int u = order[i];
            if (edge[u].size()==1 && u!=1) {
                leaves[u] = 1;
            } else if (n==1) {
                leaves[u] = 1;
            }
            if (parent[u]!= 0) {
                leaves[parent[u]] += leaves[u];
            }
        }
        int q;
        cin >> q;
        while (q--) {
            int x,y;
            cin>>x>>y;
            cout <<leaves[x]*leaves[y] <<endl;
        }
    }
}