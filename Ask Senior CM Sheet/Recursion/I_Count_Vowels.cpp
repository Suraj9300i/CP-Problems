#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

bool isVowel(char ch){
    return ch == 'A' || ch == 'a' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'O' || ch == 'o' || ch == 'u' || ch == 'U';
}

int rec(string &str, int n, int cur){
    if(cur == n) return 0;

    int cnt = rec(str, n, cur+1);
    if(isVowel(str[cur])) cnt++;

    return cnt;
}

void solve() {
    string str;
    getline(cin, str);

    cout<<(rec(str, str.size(), 0));
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



