/*  
    Link :- first think how we divide 2 bars, then if new bars then how 
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
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> v;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            v.push_back(i);
        }
    }

    if(v.size() <= 1){
        cout<<v.size();
        return;
    }

    int ans = 1;
    for(int i=1; i<v.size(); i++){
        ans *= (v[i] - v[i-1]);
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



