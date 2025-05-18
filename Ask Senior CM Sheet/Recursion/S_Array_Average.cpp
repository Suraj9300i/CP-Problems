#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

double rec(vector<int> &arr, int n, int cur){
    if(cur == n) return 0.0;

    return rec(arr, n, cur+1) + ((1.0 * arr[cur]) / (1.0 * n));
}

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<fixed<<setprecision(6)<<(rec(arr, n, 0));

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



