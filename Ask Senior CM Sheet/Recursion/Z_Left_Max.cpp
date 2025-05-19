#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

vector<int> ans;
void rec(vector<int> &arr, int n, int cur, int mx){
    if(cur == n) return;
    mx = max(mx, arr[cur]);
    ans.push_back(mx);
    rec(arr, n ,cur+1, mx);
}

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    rec(arr, n, 0, -INF);
    for(int ele:ans) cout<<ele<<" ";

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



