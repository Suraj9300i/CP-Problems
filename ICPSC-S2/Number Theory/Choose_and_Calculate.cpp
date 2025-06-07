#include<bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << '\n';
#define debugVec(v) cout << #v << " = ["; for (int i = 0; i < v.size(); ++i) cout << v[i] << (i + 1 < v.size() ? ", " : ""); cout << "]\n";

const int mod = 1e9 + 7;
const int INF = 1e18;
const int N = 100000;

inline int add(int a, int b)        { return ((a % mod) + (b % mod)) % mod; }
inline int sub(int a, int b)        { return ((a % mod) - (b % mod) + mod) % mod; }
inline int mul(int a, int b)        { return ((a % mod) * (b % mod)) % mod; }
inline int gcd(int a, int b)        { return b == 0 ? a : gcd(b, a % b); }
inline int power(int a, int b)      { int res = 1; a %= mod; while(b){ if(b&1) res = mul(res, a); a = mul(a, a); b >>= 1; } return res; }
inline int inverse(int a)           { return power(a, mod - 2); }

vector<int> fact(N+1);

void precompute(){
    fact[0] = 1;
    fact[1] = 1;
    for(int i=2; i<=N; i++){
        fact[i] = mul(fact[i-1], i);
    }
}

int ncr(int n, int r) {
    if(r > n) return 0;
    
    int x = fact[n];
    int y = mul(fact[r], fact[n-r]);

    return mul(x, inverse(y));
}


void solve() {
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    int tmax = 0;
    int tmin = 0;

    for(int i=0; i<n; i++){
        int lessthani = i;
        int greaterthani = n - i - 1;
        if(lessthani >= k-1){
            tmax = add(tmax, mul(arr[i], ncr(lessthani, k-1)));
        }

        if(greaterthani >= k-1){
            tmin = add(tmin, mul(arr[i], ncr(greaterthani, k-1)));
        }
    }

    int ans = sub(tmax, tmin);
    cout<<ans;
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
