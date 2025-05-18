#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int nCr(int n, int r) {
    if(r > n) return 0;
    if (r == 0) return 1;

    return nCr(n-1, r-1) * n / r;
}


void solve() {
    int n, r;
    cin>>n>>r;

    cout << nCr(n, r);
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



