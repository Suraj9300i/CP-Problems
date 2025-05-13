#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

void rec(vector<vector<int>> &arr, vector<vector<int>> &brr, int n, int m, int r){
    if(r == n) return;

    for(int j=0; j<m; j++){
        cout<<(arr[r][j] + brr[r][j])<<" ";
    }
    cout<<"\n";

    rec(arr, brr, n, m, r+1);
}

void solve() {
    int n, m;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m));
    vector<vector<int>> brr(n, vector<int>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>brr[i][j];
        }
    }

    rec(arr, brr, n, m, 0);

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



