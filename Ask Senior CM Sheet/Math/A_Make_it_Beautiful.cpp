#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());
    bool flag = true;
    for(int i=1; i<n; i++){
        if(v[i] != v[i-1]){
            flag = false;
            break;
        }
    }
    if(flag) cout<<"NO\n";
    else{
        cout<<"YES\n";
        cout<<v[n-1]<<" "<<v[0]<<" ";
        for(int i=n-2; i>0; i--){
            cout<<v[i]<<" ";
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



