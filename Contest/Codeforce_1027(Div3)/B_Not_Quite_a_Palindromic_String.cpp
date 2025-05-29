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
    int n, k;
    cin>>n>>k;
    string str;
    cin>>str;

    int zc = 0, oc = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i] == '1') oc++;
        else zc++;
    }

    if(zc == 0 || oc == 0){
        if((n / 2) == k) cout<<"YES\n";
        else cout<<"NO\n";
        return;
    }
    
    int mn = min(zc, oc);
    int mandatoryPairs = (n - (mn + mn)) / 2;

    if(k < mandatoryPairs){
        cout<<"NO\n";
        return;
    }

    if(k == mandatoryPairs){
        cout<<"YES\n";
        return;
    }

    k -= mandatoryPairs;

    if(k % 2 == 0) cout<<"YES\n";
    else cout<<"NO\n";

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



