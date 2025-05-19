/*  
    Link :- https://atcoder.jp/contests/abc171/tasks/abc171_e
    -------------- Learning From This Problem ---------------

    Evaluate the expression, and observe the value of Ai

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int X = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        X ^= arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<(X ^ arr[i])<<" ";
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



