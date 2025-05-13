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

    queue<int> qu;
    for(int i=0; i<n; i++){
        if(str[i] != '?'){
            qu.push(i);
        }
    }

    if(qu.empty()){
        for(int i=0; i<n; i++){
            str[i] = (i & 1) ? 'R' : 'B';
        }
    }

    while(!qu.empty()){
        int x = qu.front();
        qu.pop();

        if(x+1 < n && str[x+1] == '?'){
            str[x+1] = (str[x] == 'R' ? 'B' : 'R');
            qu.push(x+1);
        }
        if(x-1 >= 0 && str[x-1] == '?'){
            str[x-1] = (str[x] == 'R' ? 'B' : 'R');
            qu.push(x-1);
        }
    }

    cout<<str<<"\n";
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



