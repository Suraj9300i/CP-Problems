#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solve() {
    int n,k;
    cin>>n>>k;

    int x = k < n ? ((n + k - 1) / k) * k : k;
    int ans = (x + n - 1) / n;
    cout<<ans<<"\n";
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



