#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, x1, y1, x2, y2;
    cin>>n;
    cin>>x1>>y1>>x2>>y2;
    int c1 = min(min(x1, y1), min(n+1-x1, n+1-y1));
    int c2 = min(min(x2, y2), min(n+1-x2, n+1-y2));
    cout<<abs(c1-c2)<<"\n";
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



