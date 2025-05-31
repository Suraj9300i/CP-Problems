/*  
    Link :- 
    -------------- Learning From This Problem ---------------

    

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

void precompute(){}

int getPow(int a, int b){
    if(b == 0) return 1;
    if(b & 1) return (a * getPow(a, b-1)) % mod;
    int p = getPow(a, b/2);
    return (p * p) % mod;
}

void solve() {
    int a, b;
    cin>>a>>b;

    cout<<(getPow(a, b))<<"\n";
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



