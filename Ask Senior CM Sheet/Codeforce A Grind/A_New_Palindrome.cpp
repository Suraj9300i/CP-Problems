#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    string str;
    cin>>str;

    int n = str.size();
    bool flag = false;
    for(int i=1; i<n/2; i++){
        if(str[i] != str[i-1]){
            flag = true;
            break;
        }
    }
    cout<<(flag ? "YES" : "NO")<<"\n";
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



