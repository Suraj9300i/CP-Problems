#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, m, u, v;
    cin>>n>>m;
    vector<vector<int> > graph(n+1, vector<int>(n+1, 0));
    for(int i=0; i<m; i++){
        cin>>u>>v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    int ans = 0;
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            for(int k=j+1; k<=n; k++){
                if(graph[i][j] && graph[j][k] && graph[k][i]){
                    ans++;
                }
            }
        }
    }

    cout<<ans;
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



