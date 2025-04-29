#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int getPow(int x, int y){
    if(y == 0) return 1;
    if(y & 1) return x * getPow(x, y-1);
    int p = getPow(x, y/2);
    return p * p;
}

void solve() {
    string num;
    cin>>num;

    int len = num.size();
    if(len == 1){
        cout<<num;
        return;
    }

    int ans = 0;
    int prod = 1;
    for(int i=0; i<len; i++){
        int cur = prod * getPow(9, len-i-1) * max(num[i]-'0'-1, 1);
        prod *= (num[i] - '0');
        ans = max(ans, cur);
    }

    ans = max(ans, prod);

    cout<<ans;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}