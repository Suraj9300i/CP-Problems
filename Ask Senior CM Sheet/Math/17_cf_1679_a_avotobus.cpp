#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;

    if(n & 1 || n == 2) cout<<"-1\n";
    else{
        n /= 2;
        int mx = n / 2;
        int mn = n / 3;
        if(n % 3 != 0) mn++;
        cout<<mn<<" "<<mx<<"\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}