#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, k;
    cin>>n>>k;

    int mx = (n+1) / 2;
    if(k > mx) cout<<"-1\n";
    else{
        int r = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i == j){
                    if(k > 0 && i == r){
                        cout<<"R";
                        k--;
                        r += 2;
                    }
                    else cout<<".";
                }
                else cout<<".";
            }
            cout<<"\n";
        }
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



