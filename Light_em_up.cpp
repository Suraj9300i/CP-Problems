#include<bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << '\n';
#define debugVec(v) cout << #v << " = ["; for (int i = 0; i < v.size(); ++i) cout << v[i] << (i + 1 < v.size() ? ", " : ""); cout << "]\n";

const int mod = 1e9 + 7;
const int INF = 1e18;

inline int add(int a, int b)        { return ((a % mod) + (b % mod)) % mod; }
inline int sub(int a, int b)        { return ((a % mod) - (b % mod) + mod) % mod; }
inline int mul(int a, int b)        { return ((a % mod) * (b % mod)) % mod; }
inline int gcd(int a, int b)        { return b == 0 ? a : gcd(b, a % b); }
inline int power(int a, int b)      { int res = 1; a %= mod; while(b){ if(b&1) res = mul(res, a); a = mul(a, a); b >>= 1; } return res; }
inline int inverse(int a)           { return power(a, mod - 2); }

void precompute(){}

void solve() {
    

}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    precompute();
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}