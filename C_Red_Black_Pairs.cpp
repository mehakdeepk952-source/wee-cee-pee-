#include<iostream>
using namespace std;
#include<string>
#include<vector>

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    if (n == 1) {
        cout << (a[0] != b[0]) << "\n";
        return;
    }

    vector<int> dp(n + 1, 0);
    
    dp[0] = 0;
    dp[1] = (a[0] != b[0] ? 1 : 0);

    for (int i = 2; i <= n; i++) {
        int cost_vert = dp[i - 1] + (a[i - 1] != b[i - 1] ? 1 : 0);
        int cost_horiz = dp[i - 2] + (a[i - 2] != a[i - 1] ? 1 : 0) + (b[i - 2] != b[i - 1] ? 1 : 0);

        dp[i] = min(cost_vert, cost_horiz);
    }

    cout << dp[n] << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t>0){
        solve();
        t--;
    }

}