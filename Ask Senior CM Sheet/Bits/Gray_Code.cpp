#include<bits/stdc++.h>
// #define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

vector<string> rec(int n){
    if(n == 1) return {"0", "1"};

    vector<string> prev = rec(n-1);
    vector<string> cur;
    int x = prev.size();
    for(int i=0; i<x; i++){
        cur.push_back("0" + prev[i]);
    }
    for(int i=x-1; i>=0; i--){
        cur.push_back("1" + prev[i]);
    }

    return cur;
}

void solve() {
    int n;
    cin>>n;

    vector<string> prev = rec(n);
    for(string str:prev) cout<<str<<"\n";
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



