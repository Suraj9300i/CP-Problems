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
    int n, t, l, r;
    cin>>n>>t;

    vector<int> v(n+2, 0);
    for(int i=0; i<t; i++){
        cin>>l>>r;
        v[l]++;
        v[r+1]--;
    }

    for(int i=1; i<=n+1; i++){
        v[i] += v[i-1];
    }

    int ans = INF;
    for(int i=1; i<=n; i++){
        ans = min(ans, v[i]);
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



