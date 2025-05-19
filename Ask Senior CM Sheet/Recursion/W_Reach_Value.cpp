#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int rec(int n, int c){
    if(c == n) return true;
    if(c > n) return false;

    return rec(n, c*10) || rec(n, c*20);
}

void solve() {
    int n;
    cin>>n;

    cout<<(rec(n, 1) ? "YES" : "NO")<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



