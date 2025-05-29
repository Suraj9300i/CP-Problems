/*  
    Link :- 
    -------------- Learning From This Problem ---------------

    

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e18;

void precompute(){}

void solve() {
    int n, x, y;
    cin>>n;
    
    vector<pair<pair<int, int>, int>> xp;
    vector<pair<pair<int, int>, int>> yp;

    for(int i=0; i<n; i++){
        cin>>x>>y;
        xp.push_back({{x, y}, i});
        yp.push_back({{y, x}, i});
    }

    int ans = -INF;
    sort(xp.begin(), xp.end());
    sort(yp.begin(), yp.end());
    
    int a = xp[n-1].first.first - xp[0].first.first;
    for(int i=0; i<n; i++){
        if(i != xp[0].second && i != xp[n-1].second){
            
        }
    }
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



