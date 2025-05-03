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

    int x = str[0] == '0' ? 0 : 1;
    for(int i=1; i<n; i++){
        if(str[i] == '0') cout<<'+';
        else{
            if(x > 0){
                cout<<"-";
                x--;
            }else{
                cout<<"+";
                x++;
            }
        }
    }
    cout<<"\n";

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



