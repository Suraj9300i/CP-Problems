/*  
    Link :- 
    -------------- Learning From This Problem ---------------

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e16;

void precompute(){}

void solve() {
    int n;
    cin>>n;

    vector<int> arr(n+1);
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    int mn = INF;
    int i = 1;
    while(i <= n){
        int x = i-1;
        while(x > 0 && arr[x] == arr[i]) x--;

        int y = i+1;
        while(y <= n && arr[y] == arr[i]) y++;

        int lc = arr[i] * x;
        int rc = arr[i] * (n - y + 1);

        mn = min(mn, (lc + rc));
        i = y;
    }

    cout<<mn<<"\n";
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



