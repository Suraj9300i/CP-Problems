/*  
    Link :- https://www.hackerrank.com/challenges/bus-station/problem
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
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    set<int> st;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        st.insert(sum);
    }

    vector<int> fac;
    for(int i=2; i*i <= sum; i++){
        if(sum % i == 0){
            fac.push_back(i);
            if((sum / i) != i) fac.push_back(sum / i);
        }
    }

    set<int> ans;
    ans.insert(sum);
    if(sum == n) ans.insert(1);

    for(int f:fac){
        bool flag = true;
        for(int i=f; i<=sum; i += f){
            if(st.find(i) == st.end()){
                flag = false;
                break;
            }
        }
        if(flag) ans.insert(f);
    }

    for(int ele:ans) cout<<ele<<" ";
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



