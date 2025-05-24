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
    int x, y;
    cin>>x>>y;

    int cnt = 0;
    for(int i=1; i<=6; i++){
        for(int j=1; j<=6; j++){
            if((i + j) >= x || abs(i - j) >= y){
                cnt++;
            }
        }
    }
    double ans = (1.0 * cnt) / (1.0 * 36);
    cout<<fixed<<setprecision(9)<<ans;

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



