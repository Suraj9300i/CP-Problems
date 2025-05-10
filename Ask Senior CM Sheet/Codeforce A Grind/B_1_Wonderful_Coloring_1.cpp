#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    string str;
    cin>>str;

    int n = str.size();
    map<char, int> mp;
    for(char ch:str) mp[ch]++;
    int ans = 0, cnt = 0;
    for(auto it:mp){
        if(it.second == 1) cnt++;
        else ans++;
    }

    ans += (cnt / 2);
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



