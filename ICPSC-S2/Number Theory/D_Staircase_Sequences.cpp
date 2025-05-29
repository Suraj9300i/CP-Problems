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
    int n;
    cin>>n;

    n = 2 * n;

    int ans = 0;
    for(int i=1; i*i <= n; i++){
        if(n % i == 0){
            int x = i;
            int y = n / i;
            if(((x + y - 1) % 2) == 0){
                ans += (x == y ? 1 : 2);
            }
        }
    }

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



