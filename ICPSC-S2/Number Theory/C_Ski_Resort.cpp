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
    int n, k, q;
    cin>>n>>k>>q;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] <= q) arr[i] = 1;
        else arr[i] = 0;
    }

    int ans = 0;
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1) cnt++;
        else{
            int x = (cnt - k + 1);
            if(x > 0) ans += ((x * (x+1)) / 2);
            cnt = 0;
        }
    }
    if(cnt > 0){
        int x = (cnt - k + 1);
        if(x > 0) ans += ((x * (x+1)) / 2);
        cnt = 0;
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



