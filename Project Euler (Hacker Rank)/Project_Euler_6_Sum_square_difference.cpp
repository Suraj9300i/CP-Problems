/*  
    Link :- 
    -------------- Learning From This Problem ---------------

    

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;

    int sum = (n * (n+1)) / 2;
    int s1 = (n * (n+1) * (2 * n + 1)) / 6;
    int s2 = sum * sum;
    cout<<(s2 - s1)<<"\n";
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



