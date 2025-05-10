#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, k, x;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    vector<int> uv;
    uv.push_back(v[0]);
    for(int i=1; i<n; i++){
        if(v[i] != uv.back()) uv.push_back(v[i]);
    }

    int i = 0;
    for(; i<k && i<uv.size(); i++){
        if(i != uv[i]){
            break;
        }
    }

    cout<<i;
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



