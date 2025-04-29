#include<bits/stdc++.h>
#define int long long
using namespace std;
 
const int mod = 1e9 + 7;
const int INF = 1e9;
 
int getPow(int x, int y){
    if(y == 0) return 1;
    if(y & 1) return x * getPow(x, y-1);
    int p = getPow(x, y/2);
    return (p*p);
}
 
void solve() {
    int n;
    cin>>n;
 
    int ans = 0;
    int x = 1;
    int p = getPow(5, x);
    while(p <= n){
        ans += (n / p);
        p = getPow(5, x+1);
        x++;
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