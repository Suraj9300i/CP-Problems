#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, s, r;
    cin>>n>>s>>r;
    vector<int> v(n);
    v[0] = s-r;
    s -= v[0];
    int q = s / (n-1);
    int rem = s % (n-1);
    for(int i=1; i<n; i++){
        v[i] = q;
        if(rem > 0){
            v[i]++;
            rem--;
        }
    }
    for(int ele:v) cout<<ele<<" ";
    cout<<"\n";
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



