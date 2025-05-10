#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;
vector<int> v;

void precompute(){
    for(int i=1; ;i++){
        if(i % 3 != 0 && i % 10 != 3) v.push_back(i);
        if(v.size() > 1000) break;
    }

}

void solve() {
    int k;
    cin>>k;
    cout<<v[k-1]<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    precompute();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



