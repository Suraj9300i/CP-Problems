/*  
    Link :- 
    -------------- Learning From This Problem ---------------

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e18;

void precompute(){}

void solve() {
    int n, m;
    cin>>n>>m;

    vector<vector<int>> arr(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int ans = n * m;
    for(int i=0; i<n; i++){
        int c0 = 0, c1 = 0;
        for(int j=0; j<m; j++){
            if(arr[i][j] == 1) c1++;
            else c0++;
        }

        int x = (1LL << c0) - 1 - c0;
        int y = (1LL << c1) - 1 - c1;
        if(x > 0) ans += x;
        if(y > 0) ans += y;
    }

    for(int i=0; i<m; i++){
        int c0 = 0, c1 = 0;
        for(int j=0; j<n; j++){
            if(arr[j][i] == 1) c1++;
            else c0++;
        }

        int x = (1LL << c0) - 1 - c0;
        int y = (1LL << c1) - 1 - c1;
        if(x > 0) ans += x;
        if(y > 0) ans += y;
    }

    cout<<ans;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    precompute();
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



