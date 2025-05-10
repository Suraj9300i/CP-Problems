#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    string str;
    cin>>str;

    int p = 1;
    int n = str.size();
    int ans = 0;
    reverse(str.begin(), str.end());
    for(int i=0; i<n; i++){
        int d = str[i] - 'A' + 1;
        ans += (d * p);
        p *= 26;
    }
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



