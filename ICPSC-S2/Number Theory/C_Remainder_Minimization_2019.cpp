/*  
    Link :- 
    -------------- Learning From This Problem ---------------

    

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 2019;
const int INF = 1e9;

void precompute(){}

void solve() {
    int l, r;
    cin>>l>>r;

    if((r - l) > 2019){
        cout<<"0";
        return;
    }

    int mn = INF;
    for(int i=l; i<=r; i++){
        for(int j=i+1; j<=r; j++){
            mn = min(mn, ((i % 2019) * (j % 2019)) % 2019);
        }
    }

    cout<<mn;
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



