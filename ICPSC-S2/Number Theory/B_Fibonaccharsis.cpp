/*  
    Link :- https://codeforces.com/problemset/problem/1853/B
    -------------- Learning From This Problem ---------------

    1. Fibonnaci also increases significantly like powers, so 10^5 has max 30 terms
    2. we can calculate fibonacci from backwards

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, k;
    cin>>n>>k;

    if(k > 30){
        cout<<"0\n";
        return;
    }

    int ans = 0;
    for(int i=n; i>=0; i--){
        int z = n;
        int y = i;
        int cnt = 2;
        while((z-y) >= 0 && cnt < k){
            int x = z-y;
            if(x > y || x > z) break;
            z = y;
            y = x;
            cnt++;
        }

        if(cnt == k){
            ans++;
        }
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



