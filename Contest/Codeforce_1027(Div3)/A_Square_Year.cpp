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
    string str;
    cin>>str;

    int n = stoi(str);
    for(int i=0; i<=100; i++){
        for(int j=0; j<=100; j++){
            int x = (i * i) + (2 * i * j) + (j * j);
            if(x == n){
                cout<<i<<" "<<j<<"\n";
                return;
            }
        }
    }

    cout<<"-1\n";
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



