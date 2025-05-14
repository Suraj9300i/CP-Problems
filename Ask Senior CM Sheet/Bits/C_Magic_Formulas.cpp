#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int txor = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        txor ^= arr[i];
    }

    vector<int> mxor(n+1);
    for(int i=1; i<=n; i++){
        mxor[i] = i ^ mxor[i-1];
    }

    for(int i=1; i<=n; i++){
        int q = n / i;
        int rem = n % i;
        if(q & 1) txor ^= mxor[i-1];
        if(rem > 0) txor ^= mxor[rem];
    }

    cout<<txor;
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



