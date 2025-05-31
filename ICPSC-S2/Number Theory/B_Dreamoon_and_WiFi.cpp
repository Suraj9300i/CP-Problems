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

int total = 0;
int rec(string str, int n, int cur, int tar){
    if(n < 0){
        total++;
        return cur == tar ? 1 : 0;
    }
    if(str[n] == '?'){
        return rec(str,n-1,cur+1,tar) + rec(str,n-1,cur-1,tar);
    }
    cur += (str[n] == '+' ? 1 : -1);
    return rec(str,n-1,cur,tar);
}

void solve() {
    string s1, s2;
    cin>>s1>>s2;

    int tar = 0;
    for(char ch:s1){
        if(ch == '+') tar++;
        else tar--;
    }
    int correct = rec(s2, s2.size()-1, 0, tar);
    double ans = (correct * 1.0) / (total * 1.0);
    cout<<fixed<<setprecision(9)<<ans;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    precompute();
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



