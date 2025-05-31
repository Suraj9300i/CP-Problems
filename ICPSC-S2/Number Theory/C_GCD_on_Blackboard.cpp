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

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x % y);
}

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> prefix(n), suffix(n);
    prefix[0] = arr[0];
    suffix[n-1] = arr[n-1];
    for(int i=1; i<n; i++){
        prefix[i] = gcd(prefix[i-1], arr[i]);
    }
    for(int i=n-2; i>=0; i--){
        suffix[i] = gcd(suffix[i+1], arr[i]);
    }

    int ans = max(prefix[n-2], suffix[1]);
    for(int i=1; i<n-1; i++){
        int cur = gcd(prefix[i-1], suffix[i+1]);
        ans = max(ans, cur);
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



