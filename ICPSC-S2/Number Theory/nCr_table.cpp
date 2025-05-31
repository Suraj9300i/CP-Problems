/*  
    Link :- 
    -------------- Learning From This Problem ---------------

    

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9;
const int INF = 1e9;

void precompute(){}

void solve() {
    int n;
    cin>>n;
    vector<vector<int>> mat(n+1, vector<int>(n+1));
    mat[0][0] = 1;
    mat[1][0] = 1;
    mat[1][1] = 1;
    for(int i=2; i<=n; i++){
        for(int j=0; j<=i; j++){
            if(j == 0) mat[i][j] = 1;
            else mat[i][j] = (mat[i-1][j-1] + mat[i-1][j]) % mod;
        }
    }

    for(int i=0; i<=n; i++){
        cout<<mat[n][i]<<" ";
    }
    cout<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    precompute();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



