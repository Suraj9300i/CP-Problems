#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    n--;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> ans(n+1);
    ans[0] = arr[0];
    ans[n] = arr[n-1];
    for(int i=1; i<=n-1; i++){
        ans[i] = min(arr[i-1], arr[i]);
    }
    

    for(int ele:ans) cout<<ele<<" ";
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



