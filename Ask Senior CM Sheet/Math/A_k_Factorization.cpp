#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, k;
    cin>>n>>k;
    vector<int> v;
    for(int i=2; ;i++){
        if(i > n) break;
        while(n % i == 0){
            v.push_back(i);
            n /= i;
        }
    }

    if(v.size() < k) cout<<"-1";
    else{
        for(int i=0; i<k-1; i++) cout<<v[i]<<" ";
        int final = 1;
        for(int i=k-1; i<v.size(); i++) final *= v[i];
        cout<<final;
    }
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



