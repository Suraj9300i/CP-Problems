#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    map<int, int> mp;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        if(mp.find(arr[i]) != mp.end()){
            if(mp.find(-arr[i]) == mp.end()){
                ans++;
                mp[-arr[i]]++;
            }
        }
        else{
            ans++;
            mp[arr[i]]++;
        }
    }
    cout<<ans<<"\n";
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



