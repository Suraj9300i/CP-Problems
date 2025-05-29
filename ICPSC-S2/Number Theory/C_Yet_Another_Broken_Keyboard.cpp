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
    string str;
    cin>>n>>k;
    cin>>str;
    set<char> st;
    char ch;
    for(int i=0; i<k; i++){
        cin>>ch;
        st.insert(ch);
    }

    int ans = 0;
    int cnt = 0;
    for(int i=0; i<n; i++){
        ch = str[i];
        if(st.find(ch) != st.end()){
            cnt++;
        }else{
            ans += ((cnt * (cnt+1)) / 2);
            cnt = 0;
        }
    }
    if(cnt > 0) ans += ((cnt * (cnt+1)) / 2);
    
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



