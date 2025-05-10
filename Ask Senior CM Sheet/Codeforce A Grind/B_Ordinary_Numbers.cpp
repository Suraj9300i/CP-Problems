#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    string str;
    cin>>str;

    int len = str.size();
    int ans = 9 * (len-1);
    int d = str[0] - '0';
    ans += (d - 1);
    int x = 0;
    for(int i=0; i<len; i++){
        x = x * 10;
        x += d;
    }
    if(stoi(str) >= x) ans++;

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



