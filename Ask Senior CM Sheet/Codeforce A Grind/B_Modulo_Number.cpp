#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 998244353;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;

    int ans = ((n % mod) + mod) % mod;
    // if(ans == n) ans = n - ans;
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



