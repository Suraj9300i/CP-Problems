/*  
    Link :- 
    -------------- Learning From This Problem ---------------
 
*/
 
 
#include<bits/stdc++.h>
#define int long long
using namespace std;
 
const int mod = 998244353;
const int INF = 1e9;
 
void precompute(){}
 
int getPow(int x, int y){
    if(y == 0) return 1;
    if(y & 1) return (x * getPow(x, y-1)) % mod;
    int p = getPow(x, y/2);
    return (p * p) % mod;
}
 
void solve() {
    int n;
    cin>>n;
    vector<int> p(n), q(n), ans(n);
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    for(int i=0; i<n; i++){
        cin>>q[i];
    }
 
    int pmx = 0, qmx = 0;
    for(int i=0; i<n; i++){
        if(p[i] > p[pmx]) pmx = i;
        if(q[i] > q[qmx]) qmx = i;

        pair<int, int> p1 = {p[pmx], q[i - pmx]};
        pair<int, int> p2 = {q[qmx], p[i - qmx]};
        pair<int, int> p3 = max(p1, p2);
 
        ans[i] = (getPow(2, p3.first) + getPow(2, p3.second)) % mod;
    }
 
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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
 