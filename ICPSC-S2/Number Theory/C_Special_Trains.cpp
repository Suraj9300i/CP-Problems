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
    int n;
    cin>>n;

    vector<int> c(n), s(n), t(n);
    for(int i=0; i<n-1; i++){
        cin>>c[i]>>s[i]>>t[i];
    }

    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        int cur_time = 0;
        for (int j = i; j < n - 1; j++) {
            if (cur_time < s[j]) {
                cur_time = s[j];
            } else {
                int wait = (cur_time - s[j] + t[j] - 1) / t[j];
                cur_time = s[j] + wait * t[j];
            }
            cur_time += c[j];
        }
        ans[i] = cur_time;
    }

    for(int i=0; i<n; i++){
        cout<<ans[i]<<"\n";
    }
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



