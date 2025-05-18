#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

vector<vector<bool>> mat;
int rec(int n, int m, int r, int c, int a, int b){
    if(c >= m){
        c = 0;
        r += 1;
    }
    if(r == n) return 1;
    if(mat[r][c]){
        return rec(n, m, r, c+1, a, b);
    }

    int cnt  = 0;
    if(b > 0){
        mat[r][c] = true;
        cnt += rec(n, m, r, c+1, a, b-1);
        mat[r][c] = false;
    }

    if(a > 0){
        if(c+1 < m && !mat[r][c+1]){
            mat[r][c] = true;
            mat[r][c+1] = true;
            cnt += rec(n, m, r, c+1, a-1, b);
            mat[r][c+1] = false;
            mat[r][c] = false;
        }

        if(r+1 < n && !mat[r+1][c]){
            mat[r][c] = true;
            mat[r+1][c] = true;
            cnt += rec(n, m, r, c+1, a-1, b);
            mat[r+1][c] = false;
            mat[r][c] = false;
        }
    }

    return cnt;
}

void solve() {
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    
    mat.resize(n+1, vector<bool>(m+1, false));
    int ans = rec(n, m, 0, 0, a, b);
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



