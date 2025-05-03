#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    vector<vector<int> > mat(n, vector<int>(n-1));
    map<int, int> mp;
    int mx = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            cin>>mat[i][j];
            if(j == 0){
                mp[mat[i][j]]++;
                if(mp[mat[i][j]] > mp[mx]){
                    mx = mat[i][j];
                }
            }
        }
    }

    cout<<mx<<" ";
    for(int i=0; i<n; i++){
        if(mat[i][0] != mx){
            for(int j=0; j<n-1; j++){
                cout<<mat[i][j]<<" ";
            }
            break;
        }
    }
    cout<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



