#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, m, c, ele;
    cin>>n>>m;

    vector<vector<int>> v(m);

    for(int i=0; i<m; i++){
        cin>>c;
        for(int j=0; j<c; j++){
            cin>>ele;
            v[i].push_back(ele);
        }
    }

    int ans = 0;
    for(int bits=1; bits<(1<<m); bits++){
        set<int> st;
        for(int b=0; b<m; b++){
            if((bits & (1<<b)) > 0){
                for(int e:v[b]) st.insert(e);
            }
        }
        
        bool flag = true;
        for(int x=1; x<=n; x++){
            if(st.find(x) == st.end()){
                flag = false;
                break;
            }
        }

        if(flag) ans++;
    }
    cout<<ans<<"\n";

}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



