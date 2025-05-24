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
    int n;
    cin>>n;

    map<int, int> mp;
    
    for(int i=2; i<=n; i++){
        int temp = i;
        for(int j=2; j*j <= i; j++){
            if(j > temp) break;
            while(temp % j == 0){
                mp[j]++;
                temp /= j;
            }
        }
        if(temp > 1) mp[temp]++;
    }

    int ans = 1;
    for(auto it:mp){
        ans = (ans * (it.second + 1)) % mod;
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



