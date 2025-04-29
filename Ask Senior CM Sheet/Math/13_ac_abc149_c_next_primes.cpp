#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

bool isPrime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

void solve() {
    int n;
    cin>>n;

    while(!isPrime(n)){
        n++;
    }
    cout<<n;
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



