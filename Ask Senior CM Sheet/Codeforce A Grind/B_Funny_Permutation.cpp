#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    
    if(n == 1 || n == 3) cout<<"-1\n";
    else{
        vector<int> v;
        for(int i=n; i>=1; i--){
            v.push_back(i);
        }
        if(n & 1){
            reverse(v.begin() + (n/2), v.end());
        }
        for(int ele:v) cout<<ele<<" ";
        cout<<"\n";
    }

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



