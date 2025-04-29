#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, a, b;
    cin>>n>>a>>b;

    int qu = n / (a + b);
    int rem = n % (a + b);
    int ans = qu * a;
    if(rem <= a) ans += rem;
    else ans += a;
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



