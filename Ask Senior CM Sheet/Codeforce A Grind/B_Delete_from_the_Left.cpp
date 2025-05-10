#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    string s1, s2;
    cin>>s1>>s2;

    int n = s1.size();
    int m = s2.size();
    int i = n-1, j = m-1;
    while(i >= 0 && j >= 0){
        if(s1[i] != s2[j]){
            break;
        }
        i--, j--;
    }

    cout<<(i+1 + j+1);
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



