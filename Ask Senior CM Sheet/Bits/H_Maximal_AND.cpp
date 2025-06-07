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
    int n, k;
    cin>>n>>k;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> v(32);
    for(int i=0; i<=30; i++){
        int mask = 1LL << i;
        int cnt = 0;
        for(int j=0; j<n; j++){
            if((arr[j] & mask) == 0) cnt++;
        }
        v[i] = cnt;
    }

    int ans = 0;
    for(int i=30; i>=0; i--){
        if(k > 0 && k >= v[i]){
            ans += (1LL << i);
            k -= v[i];
        }
        else if(v[i] == 0){
            ans += (1LL << i);
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



