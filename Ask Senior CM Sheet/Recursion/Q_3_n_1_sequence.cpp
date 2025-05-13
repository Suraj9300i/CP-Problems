#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int rec(int n){
    if(n <= 1) return n;
    
    if(n & 1) return 1 + rec(3 * n + 1);
    else return 1 + rec(n/2);
}

void solve() {
    int n;
    cin>>n;
    int ans = rec(n);
    cout<<ans;
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



