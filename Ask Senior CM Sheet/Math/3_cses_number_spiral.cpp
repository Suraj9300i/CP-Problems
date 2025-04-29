#include<bits/stdc++.h>
#define int long long
using namespace std;
 
const int mod = 1e9 + 7;
const int INF = 1e9;
 
 
void solve() {
    int r, c;
    cin>>r>>c;
    int ans;
    if(c <= r){
        if(r&1){
            int x = (r-1) * (r-1);
            ans = x + c;
        }else{
            int x = r * r;
            ans = x - (c-1);
        }
    }
    else{
        if(c&1){
            int x = c * c;
            ans = x - (r-1);
        }else{
            int x = (c-1) * (c-1);
            ans = x + r;
        }
    }
    cout<<ans<<endl;
}
 
signed main() {
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t = 1;
cin >> t;
for (int i = 1; i <= t; i++) {
    solve();
}
return 0;
