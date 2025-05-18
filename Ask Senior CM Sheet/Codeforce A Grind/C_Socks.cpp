#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, x;
    cin>>n;
    int ans = 0;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        cin>>x;
        mp[x]++;
    }

    for(auto it:mp){
        ans += (it.second / 2);
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



