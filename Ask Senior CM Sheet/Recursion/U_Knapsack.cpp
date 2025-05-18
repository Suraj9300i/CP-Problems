#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int rec(vector<pair<int, int>> &v, int n, int cur, int cw){
    if(cur == n) return 0;

    int np = rec(v, n, cur+1, cw);
    int p = v[cur].first <= cw ? (rec(v, n, cur+1, cw - v[cur].first) + v[cur].second) : 0;
    
    return max(np, p);
}

void solve() {
    int n, w, x, y;
    cin>>n>>w;
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        v.push_back({x, y});
    }

    cout<<(rec(v, n, 0, w));

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



