#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, m, x;
    cin>>n>>m;

    if(m > n) swap(n, m);
    int t = n * m;
    vector<int> v(t);
    for(int i=0; i<(t); i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    int s1 = ((v[t-1] - v[0]) * (n-1) * m) + ((v[t-1] - v[1]) * (m-1));
    int s2 = ((v[t-1] - v[0]) * (n-1) * m) + ((v[t-2] - v[0]) * (m-1));;
    cout<<(max(s1, s2))<<"\n";
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



