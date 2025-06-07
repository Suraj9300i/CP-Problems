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

int msb(int n) {
    int msb = 0;
    while (n > 1) {
        n >>= 1;
        msb++;
    }
    return 1 << msb; // return value with only MSB set
}

void solve() {
    int n, k;
    cin>>n>>k;

    priority_queue<int> pq;
    for(int i=0; i<=31; i++){
        int mask = 1LL << i;
        if((n & mask) > 0){
            pq.push(mask);
        }
    }

    if(pq.size() > k){
        cout<<"NO";
        return;
    }

    while(pq.size() < k){
        int top = pq.top();
        pq.pop();
        if(top == 1){
            cout<<"NO";
            return;
        }
        pq.push(top / 2);
        pq.push(top / 2);
    }

    cout<<"YES\n";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

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