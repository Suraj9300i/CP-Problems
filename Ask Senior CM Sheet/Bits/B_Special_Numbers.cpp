/*  
    Link :- https://codeforces.com/problemset/problem/1594/B
    -------------- Learning From This Problem ---------------

    think in terms for binary number where 2 is n

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, k;
    cin>>n>>k;

    int ans = 0;
    int p = 1;
    while(k > 0){
        if(k & 1){
            ans = (ans + p) % mod;
        }
        p = (p * n) % mod;
        k = k>>1;
    }

    cout<<ans<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



