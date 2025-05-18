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

    int ans = -1;
    
    int i = 0;
    while(i < n){
        if(str[i] == 'o'){
            int j=i;
            while(j < n && str[j] == 'o'){
                j++;
            }
            if((i-1 >= 0 && str[i-1] == '-') || (j < n && str[j] == '-')){
                ans = max(ans, j-i);
            }
            i = j;
        }
        else i++;
    }

    cout<<ans;
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



