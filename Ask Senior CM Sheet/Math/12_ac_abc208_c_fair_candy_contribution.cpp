#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, k;
    cin>>n>>k;

    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());

    int q = k / n;
    int r = k % n;
    vector<int> ans(n, 0);
    for(int i=0; i<n; i++){
        int ind = v[i].second;
        ans[ind] = q;
        if(i < r) ans[ind] += 1;
    }

    for(int ele:ans) cout<<ele<<"\n";
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



