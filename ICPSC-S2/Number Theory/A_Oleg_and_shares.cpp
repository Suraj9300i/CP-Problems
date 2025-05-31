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
    return gcd(y, x%y);
}

void solve() {
    int n, k;
    cin>>n>>k;

    vector<int> arr(n);
    int mn = INF;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mn = min(arr[i], mn);
    }

    int ans = 0;
    bool flag = true;
    for(int i=0; i<n; i++){
        int d = arr[i] - mn;
        if(d % k != 0){
            flag = false;
            break;
        }
        ans += (d / k);
    }


    if(flag) cout<<ans;
    else cout<<"-1";

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



