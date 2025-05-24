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

vector<int> getPrimeFactors(int n){
    vector<int> v;
    int temp = n;
    for(int i=2; i*i <= n; i++){
        if(i > temp) break;
        if(temp % i == 0){
            v.push_back(i);
            while(temp % i == 0){
                temp /= i;
            }
        }
    }
    if(temp > 1) v.push_back(temp);
    return v;
}

void solve() {
    int n, m;
    cin>>n>>m;

    vector<int> arr(n);
    set<int> st;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        auto fac = getPrimeFactors(arr[i]);
        for(int ele:fac) st.insert(ele);
    }

    vector<int> ans;
    ans.push_back(1);
    for(int i=2; i<=m; i++){
        auto fac = getPrimeFactors(i);
        bool flag = true;
        for(int ele:fac){
            if(st.find(ele) != st.end()){
                flag = false;
                break;
            }
        }
        if(flag) ans.push_back(i);
    }

    cout<<ans.size()<<"\n";
    for(int ele:ans) cout<<ele<<"\n";

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



