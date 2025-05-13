#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int rec(vector<int> &arr, int n, int m, int cur){
    if(cur < (n-m)) return 0;
    return arr[cur] + rec(arr, n, m, cur-1);
}

void solve() {
    int n, m;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    cout<<(rec(arr, n, m, n-1));
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



