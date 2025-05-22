/*  
    Link :- https://www.hackerrank.com/contests/projecteuler/challenges/euler005/problem?isFullScreen=true
    -------------- Learning From This Problem ---------------
*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;
const int N = 40;
long long lcmArray[N+1];

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

long long lcm(long long a, int b) {
    return (a / gcd(a, b)) * b;
}

void precompute() {
    lcmArray[1] = 1;
    for (int i = 2; i <= N; i++) {
        lcmArray[i] = lcm(lcmArray[i - 1], i);
    }
}

void solve() {
    int n;
    cin >> n;
    cout << lcmArray[n] << "\n";
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



