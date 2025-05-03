#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int a, b;
    cin>>a>>b;

    int diff = b - a;
    if(diff >= 10) cout<<"0";
    else{
        int mul = 1;
        a %= 10;
        for(int i=1; i<=diff; i++){
            mul *= (a+i);
        }
        cout<<(mul % 10);
    }

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



