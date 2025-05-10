#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    string str;
    cin>>str;

    int n = str.size();
    int x = 0;
    int y = 0;
    for(int i=0; i<n; i++){
        if(str[i] == 'a'){
            x = i;
            y = i;
            break;
        }
    }

    string temp = "a";
    for(int i=1; i<n; i++){
        char ch = 'a' + i;
        if(x-1 >= 0 && str[x-1] == ch) x--;
        else if(y+1 < n && str[y+1] == ch) y++;
        else break;
        temp.push_back(ch);
    }

    sort(str.begin(), str.end());
    if(str == temp) cout<<"YES\n";
    else cout<<"NO\n";
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



