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

    set<int> odd, even;
    bool flag = true;
    for(int i=0; i<n; i++){
        if(i & 1){
            if(even.find(str[i]) != even.end()){
                flag = false;
                break;
            }
            odd.insert(str[i]);
        }else{
            if(odd.find(str[i]) != odd.end()){
                flag = false;
                break;
            }
            even.insert(str[i]);
        }
    }
    cout<<(flag ? "YES" : "NO")<<"\n";
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



