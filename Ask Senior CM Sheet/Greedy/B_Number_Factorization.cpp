#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    vector<pair<int, int>> v;
    int N = n;

    for (int i = 2; i * i <= N; ++i) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                n /= i;
                cnt++;
            }
            v.push_back({cnt, i});
        }
    }
    if (n > 1) {
        v.push_back({1, n});
    }
    
    sort(v.begin(), v.end());
    int ans = 0;
    int m = v.size();
    vector<int> suf(m);
    suf[m-1] = v[m-1].second;
    for(int i=m-2; i>=0; i--){
        suf[i] = v[i].second * suf[i+1];
    }

    int x = 0;
    for(int i=0; i<m; i++){
        int r = (v[i].first - x);
        if(r > 0){
            ans += (suf[i] * r);
            x += r;
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



