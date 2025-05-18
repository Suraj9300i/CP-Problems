#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

bool rec(vector<int> &v, int f, int cur, int x){
    if(cur < 0) return x == f;

    if(rec(v, f, cur-1, x + v[cur])){
        return true;
    }

    if(rec(v, f, cur-1, x - v[cur])){
        return true;
    }

    return  false;
}

void solve() {
    int n, x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    cout<<(rec(v, x, n-1, 0) ? "YES" : "NO");
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



