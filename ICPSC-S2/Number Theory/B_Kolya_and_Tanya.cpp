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
    if(y & 1) return (x * getPow(x, y-1)) % mod;
    int p = getPow(x, y/2);
    return (p*p) % mod;
}

void solve() {
    int n;
    cin>>n;

    int x = getPow(3, 3*n);
    int y = getPow(7, n);
    int ans = (x - y + mod) % mod;
    cout<<(ans);
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



