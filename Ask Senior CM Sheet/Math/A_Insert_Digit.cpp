#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    char d;
    string num;
    cin>>n>>d;
    cin>>num;

    bool flag = true;
    for(int i=0; i<n; i++){
        if(d > num[i]){
            num.insert(num.begin() + i, d);
            flag = false;
            break;
        }
    }
    if(flag) num.push_back(d);
    cout<<num<<"\n";
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



