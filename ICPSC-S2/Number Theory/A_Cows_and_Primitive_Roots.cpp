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
    int p;
    cin>>p;

    int ans = 0;
    for(int x=1; x<=p; x++){
        int pow = 1;
        bool flag = true;
        for(int i = 1; i <= p-2; i++){
            pow = (pow * x) % p;

            if((pow - 1) % p == 0){
                flag = false;
                break;
            }
        }

        if(flag){
            pow = (pow * x) % p;

            if((pow - 1) % p == 0){
                ans++;
            }
        }
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



