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
    int a, b, c, x;
    cin>>x;

    a = 0;
    b = 0;
    c = 0;

    int ans = 0;
    int mn = 0;

    while(a != x || b != x || c != x){
        if(a != x){
            mn = min({b, c});
            a = min(mn * 2 + 1, x);
            ans++;
        }

        if(b != x){
            mn = min({a, c});
            b = min(mn * 2 + 1, x);
            ans++;
        }

        if(c != x){
            mn = min({a, b});
            c = min(mn * 2 + 1, x);
            ans++;
        }
    }


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



