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

void solve() {
    string str;
    cin>>str;
    int n = str.size();
    int ans = (str[n-1] - '0') + 1;
    for(int i=n-2; i>=0; i--){
        int x = str[i] - '0';
        int y = str[i+1] - '0';
        if(x >= y){
            ans += (x - y) + 1;
        }
        else{
            ans += (10 + x - y) + 1;
        }
    }
    cout<<ans;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    precompute();
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



