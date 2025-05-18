#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int cnt(int n, int d){
    int q = n / d;
    int rem = n % d;

    int ans = q * (d / 2);
    if(rem >= (d / 2)){
        ans += (rem - (d / 2) + 1);
    }

    return ans;
}

void solve() {
    int a, b;

    cin>>a>>b;

    int ans = 0;
    for(int i=0; i<=60; i++){
        int mask = 1LL << i;
        int div = 2 * mask;
        int x = cnt(a-1, div);
        int y = cnt(b, div);

        if((y - x) & 1) ans = ans | mask;
    }

    cout<<ans;

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



