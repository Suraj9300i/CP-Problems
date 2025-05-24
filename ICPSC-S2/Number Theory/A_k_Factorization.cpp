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

    int temp = n;
    vector<int> ans;
    for(int i=2; i*i <= n; i++){
        if(i > temp) break;
        while(temp % i == 0){
            ans.push_back(i);
            temp /= i;
        }
    }
    if(temp > 1) ans.push_back(temp);

    if(ans.size() < k) cout<<"-1";
    else{
        int mul = 1;
        for(int i=0; i<k-1; i++) cout<<ans[i]<<" ";
        for(int i=k-1; i<ans.size(); i++) mul *= ans[i];
        cout<<mul;
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



