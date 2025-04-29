#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int getSum(int n){
    int s = 0;
    while(n > 0){
        s += (n % 10);
        n /= 10;
    }
    return s;
}

void solve() {
    int a, b;
    cin>>a>>b;
    int ans = max(getSum(a), getSum(b));
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



