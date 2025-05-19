#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;

    int b = 2;
    int a = 8;
    int sum = 10;
    while(true){
        int c = (4 * a) + b;
        if(c > n) break;
        sum += c;
        b = a;
        a = c;
    }

    cout<<sum<<"\n";
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



