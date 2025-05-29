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
    int n, k;
    cin>>n>>k;

    string ans = "";
    for(int i=n-2; i>=0; i--){
        int fb = i;
        int sb = n-1;
        int cnt = sb - fb;
        if(k > cnt){
            k -= cnt;
            continue;
        }
        sb -= (k - 1);
        for(int j=0; j<n; j++){
            if(j == fb || j == sb) ans.push_back('b');
            else ans.push_back('a');
        }
        break;
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



