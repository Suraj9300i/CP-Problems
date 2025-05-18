#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, k;
    cin>>n>>k;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x = 0;
    for(int i=62; i>=0; i--){
        int mask = 1LL << i;
        int c0 = 0, c1 = 0;

        for(int j=0; j<n; j++){
            if((arr[j] & mask) > 0) c1++;
            else c0++;
        }
        
        if(c0 > c1){
            int nx = x | mask;
            if(nx <= k) x = nx;
        }
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        ans += (arr[i] ^ x);
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



