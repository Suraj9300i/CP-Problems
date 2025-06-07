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

int getPow(int x, int y){
    if(y == 0) return 1;
    if(y & 1) return (x * getPow(x, y-1)) % mod;
    int p = getPow(x, y/2);
    return (p * p) % mod;
}

int inverse(int x){
    return getPow(x, mod-2);
}

void solve() {
    int n, m;
    cin>>n>>m;

    int x = 1;
    int y = 1;

    for(int i = n + m - 1, j = min(n, m - 1); i > 0 && j > 0; i--, j--){
        x = ((x % mod) * (i % mod)) % mod;
        y = ((y % mod) * (j % mod)) % mod;
    }

    int ans = (x * inverse(y)) % mod;

    cout<<ans<<"\n";
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



