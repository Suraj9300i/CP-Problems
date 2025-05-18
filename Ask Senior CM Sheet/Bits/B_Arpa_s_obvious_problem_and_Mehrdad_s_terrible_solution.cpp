#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, x;
    cin>>n>>x;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int ans = 0;
    map<int, int> mp;
    for(int i=0; i<n ; i++){
        int y = v[i] ^ x;
        ans += mp[y];
        mp[v[i]]++;
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



