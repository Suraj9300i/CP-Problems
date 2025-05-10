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

    int start = 0;
    int end = n-1;
    while(start < end){
        if(str[start] != str[end]){
            start++;
            end--;
        }
        else break;
    }
    cout<<(end - start + 1)<<"\n";
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



