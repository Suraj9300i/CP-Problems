#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

vector<vector<int>> mat;

int rec(int n, int m, int r, int c){
    if(r == n-1 && c == m-1) return mat[r][c];

    int sum = -INF;
    if(r+1 < n) sum = max(sum, rec(n, m, r+1, c));
    if(c+1 < m) sum = max(sum, rec(n, m, r, c+1));

    return mat[r][c] + sum;
}

void solve() {
    int n, m;
    cin>>n>>m;
    mat.resize(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }

    cout<<(rec(n, m, 0, 0));
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



