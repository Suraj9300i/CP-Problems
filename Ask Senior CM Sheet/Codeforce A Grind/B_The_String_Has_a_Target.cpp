#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    string str;
    cin>>str;

    int mn = 0;
    int same = -1;
    for(int i=1; i<n; i++){
        if(str[i] <= str[0]){
            if(str[i] < str[mn]){
                mn = i;
            }
            else same = i;
        }
    }
    int i = mn > 0 ? mn : same;
    string ans = i != -1 ? (str[i] + str.substr(0, i) + str.substr(i+1) ): str;
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



