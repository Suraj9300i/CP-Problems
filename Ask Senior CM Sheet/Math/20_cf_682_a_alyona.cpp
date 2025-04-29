#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, m;
    cin>>n>>m;

    vector<int> prefix(6);
    int sum = 0;
    for(int i=1; i<=min(n, 5LL); i++){
        int x = m-(5-i);
        if(x < 0) continue;
        prefix[i] = (m-(5-i)) / 5;
        if(i != 5) prefix[i]++;
        prefix[i] += prefix[i-1];
    }

    int ans = prefix[5] * (n / 5);
    ans += prefix[n % 5];
    cout<<ans;

}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}