/*  
    Link :- https://codeforces.com/problemset/problem/2020/B
    -------------- Learning From This Problem ---------------

    perfect square has odd number of divisors
    Handle overflow efficiently, in case of 10 ^ 18
*/


#include<bits/stdc++.h>
#define int long long int
using namespace std;

const int mod = 1e9 + 7;
const int INF = 2e18;

int getSq(int n){
    int low = 1;  // Avoid division by zero
    int high = n;
    int ans = 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        int sq = n / mid;
        if(mid <= sq){
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}

void solve() {
    int k;
    cin>>k;

    int low = 0;
    int high = INF;
    int ans = k;
    while(low <= high){
        int mid = low + (high - low) / 2;
        int sq = getSq(mid);
        int on = mid - sq;
        if(on == k){
            ans = mid;
            high = mid - 1;
        }
        else if(on > k) high = mid - 1;
        else low = mid + 1;
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



