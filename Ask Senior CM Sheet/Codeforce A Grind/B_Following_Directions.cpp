#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    string str;
    cin>>str;

    int x = 0, y = 0;
    bool flag = false;
    for(int i=0; i<n; i++){
        if(str[i] == 'U') y++;
        else if(str[i] == 'D') y--;
        else if(str[i] == 'R') x++;
        else x--;
        if(x == 1 && y == 1) flag = true;
    }

    cout<<(flag ? "YES" : "NO")<<"\n";

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



