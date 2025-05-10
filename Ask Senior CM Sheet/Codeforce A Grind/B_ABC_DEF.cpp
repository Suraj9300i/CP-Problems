#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 998244353;
const int INF = 1e9;


void solve() {
    int a, b, c, d, e, f;
    cin>>a>>b>>c>>d>>e>>f;

    int m1 = ((((a % mod) * (b % mod)) % mod) * (c % mod)) % mod;
    int m2 = ((((d % mod) * (e % mod)) % mod) * (f % mod)) % mod;
    int ans = (m1 - m2 + mod) % mod;
    cout<<ans;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



