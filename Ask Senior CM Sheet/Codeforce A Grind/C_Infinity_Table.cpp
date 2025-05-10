#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int intSqrt(int x) {
    int left = 0, right = x, ans = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mid * mid <= x) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}

void solve() {
    int n;
    cin>>n;

    int s = intSqrt(n);
    int sq = s * s;
    if(n == sq) cout<<s<<" "<<1<<"\n";
    else{
        if(n <= (sq + s + 1)){
            cout<<(n - sq)<<" "<<(s+1)<<"\n";
        }else{
            cout<<(s+1)<<" "<<(((s+1) * (s+1)) - n + 1)<<"\n";
        }
    }
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



