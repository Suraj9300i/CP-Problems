#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, q, qt, x;
    cin>>n>>q;
    vector<int> v(n);
    int oc = 0, ec = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i] & 1) oc++;
        else ec++;
        sum += v[i];
    }
    for(int i=0; i<q; i++){
        cin>>qt>>x;
        if(qt == 0){
            sum += (ec * x);
            if(x & 1){
                oc += ec;
                ec = 0;
            }
        }
        else{
            sum += (oc * x);
            if(x & 1){
                ec += oc;
                oc = 0;
            }
        }
        cout<<sum<<"\n";
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



