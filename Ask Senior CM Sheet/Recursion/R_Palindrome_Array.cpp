#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

bool rec(vector<int> &arr, int start, int end){
    if(start >= end) return true;
    if(arr[start] != arr[end]) return false;

    return rec(arr, start+1, end-1);
}

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<(rec(arr, 0, n-1) ? "YES" : "NO");

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



