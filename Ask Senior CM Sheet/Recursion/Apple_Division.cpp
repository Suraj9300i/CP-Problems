#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int rec(vector<int> &arr, int cur, int s1, int s2){
    if(cur < 0){
        return abs(s1 - s2);
    }

    int x = rec(arr, cur-1, s1 + arr[cur], s2);
    int y = rec(arr, cur-1, s1, s2 + arr[cur]);

    return min(x, y);
}

void solve() {
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = rec(arr, n-1, 0, 0);
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



