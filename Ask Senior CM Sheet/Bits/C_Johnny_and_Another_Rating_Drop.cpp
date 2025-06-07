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

    int ans = 0;
    for(int i=0; i<=60; i++){
        int freq = 1LL << (i+1);
        
        int q = n / freq;
        int r = n % freq;
        int x = q, y = q;
        if(r < (freq / 2)) x++;
        else{
            x++,  y++;
        }

        ans += (x + y - 1);
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



