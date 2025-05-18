#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = 0;
    for(int i=0; i<=60; i++){
        int mask = 1LL << i;
        int c0 = 0, c1 = 0;
        for(int j=0; j<n; j++){
            if((arr[j] & mask) > 0) c1++;
            else c0++;
        }

        ans = (ans + (((c0 * c1) % mod * (mask % mod)) % mod)) % mod;
    }

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



