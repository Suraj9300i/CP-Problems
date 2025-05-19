#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int rec(int s, int e){
    if(s == e) return 1;
    if(s > e) return 0;

    int cnt = 0;
    cnt += rec(s+1, e);
    cnt += rec(s+2, e);
    cnt += rec(s+3, e);

    return cnt;
}

void solve() {
    int s, e;
    cin>>s>>e;
    cout<<(rec(s, e));
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



