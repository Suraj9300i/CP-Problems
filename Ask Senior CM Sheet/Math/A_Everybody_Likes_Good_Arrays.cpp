#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = 0;
    bool prev = arr[0] & 1;
    for(int i=1; i<n; i++){
        bool cur = arr[i] & 1;
        if(cur == prev) ans++;
        else{
            prev = cur;
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



