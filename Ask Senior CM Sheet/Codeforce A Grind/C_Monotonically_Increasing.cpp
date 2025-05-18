#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

void rec(int n, int m, int pos, int start, vector<int> &ans){
    if(pos == n){
        for(int &ele:ans) cout<<ele<<" ";
        cout<<"\n";
        return;
    }

    for(int i=start; i<=m; i++){
        ans.push_back(i);
        rec(n, m, pos+1, i+1, ans);
        ans.pop_back();
    }

}

void solve() {
    int n, m;
    cin>>n>>m;

    vector<int> ans;
    rec(n, m, 0, 1, ans);
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



