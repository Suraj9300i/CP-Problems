/*  
    Link :- 
    -------------- Learning From This Problem ---------------

    

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

void precompute(){}

void solve() {
    int n;
    cin>>n;
    vector<int> dear(n+1);
    dear[0] = 0;
    dear[1] = 0;
    dear[2] = 1;
    for(int i=3; i<=n; i++){
        dear[i] = ((i-1) % mod * (dear[i-1] + dear[i-2]) % mod) % mod;
    }
    cout<<dear[n];
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



