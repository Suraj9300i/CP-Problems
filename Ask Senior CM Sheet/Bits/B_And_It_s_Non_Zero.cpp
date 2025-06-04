/*  
    Link :- 
    -------------- Learning From This Problem ---------------

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e16;
const int N = 200000;
vector<vector<int>> cnt(32, vector<int>(N+1)); 

void precompute(){
    for(int i=0; i<32; i++){
        int mask = 1LL << i;
        int c0 = 0;
        for(int j=1; j<=N; j++){
            if((j & mask) == 0) c0++;

            cnt[i][j] = c0;
        }
    }
}

void solve() {
    int l, r;
    cin>>l>>r;

    int mn = INF;
    for(int i=0; i<32; i++){
        int x = cnt[i][l-1];
        int y = cnt[i][r];
        int c = y - x;
        mn = min(mn, c);
    }

    cout<<mn<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    precompute();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



