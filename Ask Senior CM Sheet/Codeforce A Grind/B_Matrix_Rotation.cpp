#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    if((a < b && a < c && b < d && c < d) || (c < d && c < a && d < b && a < b) || (d < b && c < a && d < c && b < a) || (b < a && b < d && a < c && d < c)){
        cout<<"YES\n";
    }
    else cout<<"NO\n";

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



