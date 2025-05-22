/*  
    Link :- 
    -------------- Learning From This Problem ---------------

    

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;
const int N = 300000;
vector<int> x(N+1);

void precompute(){
    for(int i=1; i<=N; i++){
        x[i] = x[i-1] ^ i;
    }
}

void solve() {
    int a, b;
    cin>>a>>b;
    if(x[a-1] == b) cout<<a<<"\n";
    else if(x[a] == b) cout<<(a+2)<<"\n";
    else cout<<(a+1)<<"\n";
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



