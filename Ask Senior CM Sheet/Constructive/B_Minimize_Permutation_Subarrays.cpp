#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int i1, i2, in;
    for(int i=0; i<n; i++){
        if(arr[i] == 1) i1 = i+1;
        else if(arr[i] == 2) i2 = i+1;
        else if(arr[i] == n) in = i+1;
    }

    if(in < min(i1, i2)) cout<<(min(i1, i2))<<" "<<(in)<<"\n";
    else if(in > max(i1, i2)) cout<<(max(i1, i2))<<" "<<(in)<<"\n";
    else cout<<(i1)<<" "<<(i2)<<"\n";
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



