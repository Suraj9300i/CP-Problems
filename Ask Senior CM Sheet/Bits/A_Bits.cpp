#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int l ,r;
    cin>>l>>r;
    for(int i=0; i<63; i++){
        if((l & (1LL << i)) == 0){
            int nl = l | (1LL << i);
            if(nl > r) break;
            l = nl;
        }
    }
    cout<<l<<"\n";
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



