#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

void rec(int n, int s){
    if(n == 0) return;
    for(int i=0; i<s; i++) cout<<" ";
    for(int i=0; i<(2 * (n-1) + 1); i++) cout<<"*";
    cout<<"\n";
    rec(n-1, s+1);
}

void solve() {
    int n;
    cin>>n;
    rec(n, 0);
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



