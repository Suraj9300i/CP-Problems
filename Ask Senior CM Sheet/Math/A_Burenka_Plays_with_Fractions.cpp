#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solve() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    if(a%b==0 && c%d == 0 && a/b == c/d){
        cout<<"0\n";
        return;
    }

    int x = a * d;
    int y = b * c;
    int g = gcd(x, y);
    x /= g;
    y /= g;
    
    int lcm = (x * y) / gcd(x, y);

    int ans = 0;
    if(lcm != x) ans++;
    if(lcm != y) ans++;
    cout<<ans<<"\n";
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



