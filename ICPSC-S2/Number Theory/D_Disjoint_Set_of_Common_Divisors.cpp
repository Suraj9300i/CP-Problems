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

set<int> getDivisors(int n){
    set<int> v;
    for(int i=1; i*i <= n; i++){
        if(n % i == 0){
            v.insert(i);
            if((n / i) != i) v.insert(n / i);
        }
    }
    return v;
}

bool isPrime(int n){
    for(int i=2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void solve() {
    int a, b;
    cin>>a>>b;

    auto s1 = getDivisors(a);
    auto s2 = getDivisors(b);
    vector<int> cmn;
    for(auto it:s1){
        if(s2.find(it) != s2.end()){
            cmn.push_back(it);
        }
    }

    int ans = 0;
    for(int ele:cmn){
        if(isPrime(ele)) ans++;
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



