#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

void dfs(vector<int> graph[], vector<bool> &vis, int src){
    vis[src] = true;
    for(int nbr:graph[src]){
        if(!vis[nbr]){
            dfs(graph, vis, nbr);
        }
    }
}

void solve() {
    int n, m, u, v;
    cin>>n>>m;
    vector<int> graph[n+1];
    for(int i=0; i<m; i++){
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int cc = 0;
    vector<bool> vis(n+1, false);
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            cc++;
            dfs(graph, vis, i);
        }
    }

    cout<<cc;
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



