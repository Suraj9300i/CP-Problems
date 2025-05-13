#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;

    int ans;
    if(n < 6){
        ans = 15;
    }
    else if(n % 6 == 0){
        ans = (n / 6) * 15;
    }
    else if(n % 6 <= 2){
        ans = 20 + ((n - 8 + 5) / 6) * 15;
    }
    else if(n % 6 <= 4){
        ans = 25 + ((n - 10 + 5) / 6) * 15;
    }
    else{
        ans = ((n + 5) / 6) * 15;
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



