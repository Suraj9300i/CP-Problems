/*  
    Link :- 
    -------------- Learning From This Problem ---------------

    

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;
const int N = 1000000;
vector<int> fac(N+1);

void precompute(){
    fac[0] = 1;
    for(int i=1; i<=N; i++){
        fac[i] = (fac[i-1] * i) % mod;
    }
}

int getPow(int x, int y){
    if(y == 0) return 1;
    if(y & 1) return (x * getPow(x, y-1)) % mod;
    int p = getPow(x, y/2);
    return (p*p) % mod;
}

int inverse(int x){
    return getPow(x, mod-2);
}

void solve() {
    int a, b;
    cin>>a>>b;

    int num = fac[a] % mod;
    int den = inverse((fac[a-b] % mod * fac[b] % mod) % mod) % mod;
    int ans = (num * den) % mod;
    cout<<ans<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    precompute();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



