/*  
    Link :- 
    -------------- Learning From This Problem ---------------

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

void precompute(){}

void solve() {
    string x, y;
    cin>>x;
    cin>>y;

    int c1 = 0;
    for(int i=y.size()-1; i>=0; i--){
        if(y[i] == '0') c1++;
        else break;
    }

    int c2 = 0;
    for(int i=x.size()-1; i>=0; i--){
        if(c1 > 0){
            c1--;
            continue;
        }
        if(x[i] == '1'){
            break;
        }
        c2++;
    }

    cout<<c2<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    precompute();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



