#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int gcd(int x, int y){
    if(x == 0) return y;
    return gcd(y%x, x);
}


void solve() {
    int a, b, k;
    cin>>a>>b>>k;
    int g = gcd(a, b);
    vector<int> v;
    for(int i=1; i*i<=g; i++){
        if(g % i == 0){
            int q = g / i;
            v.push_back(i);
            if(i != q) v.push_back(q);
        }
    }
    sort(v.begin(), v.end());
    cout<<v[v.size()-k];
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



