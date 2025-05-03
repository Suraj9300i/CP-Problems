#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    vector<pair<int, int> > v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first;
        v[i].second = i+1;
    }

    sort(v.begin(), v.end());
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int mul = v[i].first * v[j].first;
            if(mul >= (n+n)) break;
            if(mul == (v[i].second + v[j].second)) ans++;
        }
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



