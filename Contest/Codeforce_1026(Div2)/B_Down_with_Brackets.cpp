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

    int cnt = 0, z = 0;
    for(char ch:str){
        if(ch == '(') cnt++;
        else cnt--;

        if(cnt == 0) z++;
    }

    cout<<(z > 1 ? "YES" : "NO")<<"\n";
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



