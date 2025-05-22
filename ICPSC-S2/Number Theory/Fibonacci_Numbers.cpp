/*  
    Link :- https://cses.fi/problemset/task/1722
    -------------- Learning From This Problem ---------------

    

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;
using vvi = vector<vector<int>>;

const int mod = 1e9 + 7;
const int INF = 1e9;

vvi multiply(vvi A, vvi B){
    vvi ans(2, vector<int>(2, 0));
    ans[0][0] = ((A[0][0] * B[0][0]) % mod + (A[0][1] * B[1][0]) % mod) % mod;
    ans[0][1] = ((A[0][0] * B[0][1]) % mod + (A[0][1] * B[1][1]) % mod) % mod;
    ans[1][0] = ((A[1][0] * B[0][0]) % mod + (A[1][1] * B[1][0]) % mod) % mod;
    ans[1][1] = ((A[1][0] * B[0][1]) % mod + (A[1][1] * B[1][1]) % mod) % mod;
    return ans;
}

vvi power(vvi &mat, int n){
    if(n == 0) return {{1, 0}, {0, 1}};
    if(n & 1) return multiply(mat, power(mat, n-1));
    vvi res = power(mat, n/2);
    return multiply(res, res);
}

void solve() {
    int n;
    cin>>n;
    if(n == 0){
        cout<<"0";
        return;
    }
    
    vvi T = {{1, 1}, {1, 0}};
    vvi F = power(T, n-1);
    cout<<F[0][0];
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



