#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    vector<int> v(n);

    int mx1 = -INF;
    int mx2 = -INF;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i] > mx1){
            mx2 = mx1;
            mx1 = v[i];
        }
        else if(v[i] > mx2) mx2 = v[i];
    }

    for(int i=0; i<n; i++){
        if(v[i] == mx1) cout<<(v[i] - mx2)<<" ";
        else cout<<(v[i] - mx1)<<" ";
    }
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



