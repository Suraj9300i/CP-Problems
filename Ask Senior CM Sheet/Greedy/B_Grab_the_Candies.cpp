#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int b = 0, m = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] & 1) b += arr[i];
        else m += arr[i];
    }

    if(m > b) cout<<"YES\n";
    else cout<<"NO\n";
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



