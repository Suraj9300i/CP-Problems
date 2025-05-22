/*  
    Link :- https://www.hackerrank.com/contests/projecteuler/challenges/euler004/problem?isFullScreen=true
    -------------- Learning From This Problem ---------------

    

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

bool isPalindrome(int n){
    int t = n;
    int x = 0;
    while(n > 0){
        x = (x * 10) + (n % 10);
        n = n/10;
    }
    return x == t;
}

void solve() {
    int n;
    cin>>n;

    int ans = -1;
    for(int i=999; i>=100; i--){
        for(int j=999; j>=100; j--){
            if((i * j) >= n) continue;

            if(isPalindrome(i * j)){
                ans = max(ans, i * j);
            }
        }
    }

    cout<<ans<<"\n";
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



