/*
    Link :- https://atcoder.jp/contests/abc301/tasks/abc301_d
    -------------- Learning From This Problem ---------------

    1. To create a larger binary number, we should set higher (leftmost) bits to 1.
       → Each left bit has more weight (2^position), so flipping a '?' earlier helps more.

    2. While greedily constructing the number:
       a. First, treat all '?' as 0 to get the smallest possible value.
       b. Then traverse left to right, and for each '?', try setting it to 1
          — but only if the resulting number is still ≤ N.

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    string str;
    cin>>str;

    int n;
    cin>>n;

    int ans = 0;
    for(int i=0, j=str.size()-1; i<str.size(); i++, j--){
        int mask = 1LL << j;
        if(str[i] == '1') ans |= mask;
    }

    for(int i=0, j=str.size()-1; i<str.size(); i++, j--){
        int mask = 1LL << j;
        if(str[i] == '?'){
            int nn = ans | mask;
            if(nn <= n) ans = nn;
        }
    }

    if(ans <= n) cout<<ans;
    else cout<<"-1";

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



