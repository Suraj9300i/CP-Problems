#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    string str;
    cin>>n;
    cin>>str;

    int x = 0, y = 0;
    set<pair<int, int>> st;
    bool flag = false;
    st.insert({0, 0});
    for(char ch:str){
        if(ch == 'R') x++;
        else if(ch == 'L') x--;
        else if(ch == 'U') y++;
        else if(ch == 'D') y--;

        if(st.find({x, y}) != st.end()){
            flag = true;
            break;
        }
        st.insert({x, y});
    }

    if(flag) cout<<"Yes";
    else cout<<"No";
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



