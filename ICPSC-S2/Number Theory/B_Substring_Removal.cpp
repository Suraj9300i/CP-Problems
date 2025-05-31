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

void solve() {
    int n;
    cin>>n;
    string str;
    cin>>str;

    bool flag = true;

    int x = 1;
    for(int i=1; i<n; i++){
        if(str[i] != str[i-1]){
            flag  = false;
            break;
        }
        else x++;
    }

    if(flag){
        cout<<((n * (n+1)) / 2);
        return;
    }

    int y = 1;
    for(int i=n-2; i>=0; i--){
        if(str[i] == str[i+1]){
            y++;
        }
        else break;
    }

    if(str[0] != str[n-1]) cout<<((((x % mod) + (y % mod)) % mod + 1) % mod);
    else cout<<(((((x+1) % mod) * ((y+1) % mod)) % mod) % mod);
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



