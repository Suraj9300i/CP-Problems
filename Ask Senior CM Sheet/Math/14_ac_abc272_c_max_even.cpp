#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, x;
    cin>>n;
    vector<int> even, odd;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x&1) odd.push_back(x);
        else even.push_back(x);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    int mx = -1LL;
    if(even.size() > 1) mx = max(mx, even[even.size()-1] + even[even.size()-2]);
    if(odd.size() > 1) mx = max(mx, odd[odd.size()-1] + odd[odd.size()-2]);
    cout<<mx;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



