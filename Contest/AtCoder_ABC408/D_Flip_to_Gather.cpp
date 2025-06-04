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
    int n;
    cin>>n;
    string str;
    cin>>str;

    int zs = -1,ze = 0;
    int os = -1, oe = 0;
    for(int i=0; i<n; i++){
        if(str[i] == '0'){
            if(zs == -1) zs = i;
            ze = i;
        }
        else{
            if(os == -1) os = i;
            oe = i;
        }
    }

    // 11011100011

    int c1 = 0;
    for(int i=zs; i<=ze; i++){
        if(str[i] == '1'){
            c1++;
        }
    }

    int c2 = 0;
    for(int i=os; i<=oe; i++){
        if(str[i] == '0'){
            c2++;
        }
    }

    cout<<min(c1, c2)<<"\n";

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



