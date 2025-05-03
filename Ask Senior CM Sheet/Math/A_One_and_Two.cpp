#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    int cnt = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i] == 2) cnt++;
    }

    int ans = -1;
    int cur = 0;
    for(int i=0; i<n-1; i++){
        if(v[i] == 2) cur++;
        int rem = cnt - cur;
        if(cur == rem){
            ans = i+1;
            break;
        }
    }

    cout<<(cnt > 0 ? ans : 1)<<"\n";
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



