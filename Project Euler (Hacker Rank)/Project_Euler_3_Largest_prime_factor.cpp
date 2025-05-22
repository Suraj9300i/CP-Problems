/*  
    Link :- https://www.hackerrank.com/contests/projecteuler/challenges/euler003/problem?isFullScreen=true
    -------------- Learning From This Problem ---------------

    

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int n;
    cin>>n;

    int ans = n;
    for(int i=2; i*i <= n; i++){
        if(i > n) break;
        if(n % i != 0) continue;

        while(n % i == 0){
            n = n / i;
        }

        ans = i;
    }
    if(n > 1) ans = max(ans, n);
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



