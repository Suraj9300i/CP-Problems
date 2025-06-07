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

int ncr(int n, int r){
    int n1 = 1, d1 = 1;
    for(int i=1; i<=r; i++){
        n1 = (n1 % mod * (n - i + 1) % mod) % mod;
        d1 = (d1 % mod * (i) % mod) % mod;
    }
    return (n1 * inverse(d1)) % mod;
}

void solve() {
    int n, a, b;
    cin>>n>>a>>b;

    int total = getPow(2, n);
    total = (total - ncr(n, a) + mod) % mod;
    total = (total - ncr(n, b) + mod) % mod;
    total = (total - 1 + mod) % mod;
    cout<<total;

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



