#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;

    string str;
    cin>>str;

    vector<pair<int, int>> v;
    vector<int> ans(n);
    int cnt = 0;
    int mid = (n+1) / 2;

    for(int i=1; i<=n; i++){
        int bef = str[i-1] == 'L' ? i - 1 : n - i;
        int aft = str[i-1] == 'L' ? n - i : i - 1;
        if(aft > bef){
            v.push_back({aft, bef});
        }
        cnt += bef;
    }

    sort(v.begin(), v.end());
    int j = (int) v.size() - 1;
    for(int i=0; i<n; i++){
        if(j >= 0){
            cnt -= v[j].second;
            cnt += v[j].first;
            j = j-1;
        }
        ans[i] = cnt;
    }

    for(int i=0; i<n; i++) cout<<ans[i]<<" ";
    cout<<"\n";
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



