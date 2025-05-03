#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int a, b;
    cin>>a>>b;
    if(b <= 1) cout<<"NO\n";
    else{
        cout<<"YES\n";
        int x = a;
        int y = (2 * b - 1) * a;
        cout<<x<<" "<<y<<" "<<(x+y)<<"\n";
    }

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



