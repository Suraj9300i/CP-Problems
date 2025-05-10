#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int a, b, c;
    cin>>a>>b>>c;

    if(a > b) swap(a, b);
    int d = b - a;
    int t = 2 * (d - 1) + 2;
    if(a > t || b > t || c > t) cout<<"-1\n";
    else{
        if((c+d) <= t) cout<<(c+d)<<"\n";
        else if((c-d) >= 1) cout<<(c-d)<<"\n";
        else cout<<"-1\n";  
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



