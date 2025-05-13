#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

void rec(int n, int cur){
    if(cur > n) return;
    
    for(int i=0; i<(n-cur); i++) cout<<" ";
    for(int i=0; i<((2 * (cur - 1)) + 1); i++) cout<<"*";
    cout<<"\n";

    rec(n, cur+1);
}

void solve() {
    int n;
    cin>>n;

    rec(n, 1);
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



