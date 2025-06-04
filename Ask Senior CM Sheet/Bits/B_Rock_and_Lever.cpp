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

int getmsb(int n){
    int x = 0;
    while(n > 0){
        x++;
        n = n >> 1;
    }
    return x;
}

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    map<int, int> mp;
    int ans = 0;

    for(int i=0; i<n; i++){
        int m = getmsb(arr[i]);
        ans += mp[m];
        mp[m]++;
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



