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

int getPow(int x, int y){
    if(y == 0) return 1;
    if(y&1) return (x * getPow(x, y-1)) % mod;
    int p = getPow(x, y/2);
    return (p*p) % mod;
}

void solve() {
    int k;
    cin>>k;
    int n = (1LL<<k) - 1;
    int ans = (6 * getPow(4, n-1)) % mod;
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



