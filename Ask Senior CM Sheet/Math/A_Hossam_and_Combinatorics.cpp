#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    int mx = -INF;
    int mn = INF;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i] > mx) mx = v[i];
        if(v[i] < mn) mn = v[i];
        mp[v[i]]++;
    }

    int diff = mx - mn;

    if(diff == 0) cout<<((n * (n-1)))<<"\n";
    else cout<<(2LL * mp[mn] * mp[mx])<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



