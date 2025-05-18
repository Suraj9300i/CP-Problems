#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    set<int> ans;
    set<int> prev;            

    for(int i=n-1; i>=0; i--){
        set<int> cur = {arr[i]};
        for(int ele:prev){
            cur.insert(ele | arr[i]);
        }
        for(int ele:cur) ans.insert(ele);
        prev = cur;
    }
    cout<<ans.size();
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



