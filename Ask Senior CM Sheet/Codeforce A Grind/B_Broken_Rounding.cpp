#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, k;
    cin>>n>>k;

    int p = 1;
    for(int i=1; i<=k; i++){
        p *= 10;
        int d = ((n % p) * 10) / p;
        n /= p;
        n *= p;
        if(d > 4){
            n += p;
        }
        // cout<<d<<" "<<n<<"\n";
    }
    cout<<n;

}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



