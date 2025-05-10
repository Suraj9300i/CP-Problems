#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, m;
    cin>>n>>m;
    vector<string> src(n), tar(n);
    for(int i=0; i<n; i++){
        cin>>src[i];
    }
    for(int i=0; i<n; i++){
        cin>>tar[i];
    }

    bool flag = false;
    for(int s=0; s<m; s++){
        for(int t=0; t<n; t++){
            vector<string> temp = src;
            for(int j=0; j<m; j++){
                for(int i=0; i<n; i++){
                    temp[i][j] = src[i][(j+s) % m];
                }
            }
            vector<string> temp2 = temp;
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    temp[i][j] = temp2[(i+t) % n][j];
                }
            }
            
            bool cf = true;
            for(int i=0; i<n; i++){
                if(temp[i] != tar[i]){
                    cf = false;
                    break;
                }
            }
            if(cf){
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    cout<<(flag ? "Yes" : "No");

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



