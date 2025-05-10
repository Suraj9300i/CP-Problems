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
    int n;
    cin>>n;
    vector<int> v(n);
    map<int, int> mp;
    for(int i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]] = i;
    }
    int g = mp[1];
    for(int i=1; i<n; i++){
        g = gcd(g, abs(mp[i+1] - i));
    }
    cout<<g<<"\n";
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



