#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    
    n -= 1;

    int x = n / 3;
    int y = n / 5;
    int z = n / 15;
    
    int ans = 3LL * ((x * (x+1)) / 2);
    ans += (5LL * ((y * (y+1)) / 2));
    ans -= (15LL * ((z * (z+1)) / 2));
    
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



