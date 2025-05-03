

#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    string str;
    cin>>str;

    const string pi = "314159265358979323846264338327";
    int n = str.size();
    int ans = 0;
    for(int i=0; i<n; i++){
        if(str[i] == pi[i]) ans++;
        else break;
    }
    cout<<ans<<"\n";
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



