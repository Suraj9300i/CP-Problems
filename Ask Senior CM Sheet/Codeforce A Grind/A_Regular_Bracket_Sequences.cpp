#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

vector<string> v;
void rec(int n, int open, int close, string &str){
    if(open == 0 && close == 0){
        v.push_back(str);
        return;
    }
    if(v.size() == n) return;

    if(open > 0){
        str.push_back('(');
        rec(n, open-1, close, str);
        str.pop_back();
    }

    if(close > open){
        str.push_back(')');
        rec(n, open, close-1, str);
        str.pop_back();
    }
}

void solve() {
    int n;
    cin>>n;
    v.clear();

    string str = "";
    rec(n, n, n, str);
    for(string s:v) cout<<s<<"\n";
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



