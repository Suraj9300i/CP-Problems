#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

bool isPrime(int n){
    for(int i=2; i*i<=n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

void solve() {
    int n, m;
    cin>>n>>m;
    vector<vector<int>> ans(n, vector<int>(m));

    if(isPrime(n) && isPrime(m)){
        int x = 1;
        for(int i=0; i<n; i+=2){
            for(int j=0; j<m; j++){
                ans[i][j] = x++;
            }
        }
        for(int i=1; i<n; i+=2){
            for(int j=0; j<m; j++){
                ans[i][j] = x++;
            }
        }
    }else if(isPrime(n)){
        int x = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ans[i][j] = x++;
            }
        }
    }else{
        int x = 1;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                ans[j][i] = x++;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }

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



