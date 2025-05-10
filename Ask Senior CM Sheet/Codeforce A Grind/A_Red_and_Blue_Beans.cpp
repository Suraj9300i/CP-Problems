#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int r, b, d;
    cin>>r>>b>>d;
    if(r > b) swap(r, b);
    int x = (b + r - 1) / r;
    if(r == b || x <= (d+1)) cout<<"YES\n";
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



