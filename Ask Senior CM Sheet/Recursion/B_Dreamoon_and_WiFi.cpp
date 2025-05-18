#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int cor = 0;
int wrong = 0;

int calc(string &str){
    int res = 0;
    for(char ch:str){
        if(ch == '+') res++;
        else res--;
    }
    return res;
}

void rec(string &str, int ind, int des){
    if(ind == str.size()){
        if(calc(str) == des) cor++;
        else wrong++;
        return;
    }

    if(str[ind] == '?'){
        str[ind] = '+';
        rec(str, ind+1, des);

        str[ind] = '-';
        rec(str, ind+1, des);
        str[ind] = '?';
    }
    else{
        rec(str, ind+1, des);
    }
}

void solve() {
    string s1, s2;
    cin>>s1>>s2;

    rec(s2, 0, calc(s1));

    double ans = (1.0 * cor) / (1.0 * (cor + wrong));
    cout << fixed << setprecision(12) << ans;
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



