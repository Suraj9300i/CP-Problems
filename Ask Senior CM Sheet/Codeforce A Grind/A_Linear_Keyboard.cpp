#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    string alpha, str;
    cin>>alpha;
    cin>>str;

    map<char, int> mp;
    for(int i=0; i<alpha.size(); i++){
        mp[alpha[i]] = i+1;
    }

    int ans = 0;
    int n = str.size();
    for(int i=1; i<n; i++){
        ans += abs(mp[str[i]] - mp[str[i-1]]);
    }

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



