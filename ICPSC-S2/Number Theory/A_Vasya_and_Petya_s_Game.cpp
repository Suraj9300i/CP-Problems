/*  
    Link :- 
    -------------- Learning From This Problem ---------------

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e16;

void precompute(){}

bool isPrime(int n){
    for(int i=2; i*i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;

    vector<int> ans;
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            for(int j=i; j<=n; j*=i){
                ans.push_back(j);
            }
        }
    }

    cout<<ans.size()<<"\n";
    for(int ele:ans){
        cout<<ele<<" ";
    }
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



