#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

int lcm(int x, int y){
    return (x * y) / gcd(x, y);
}

void solve() {
    int n;
    cin>>n;

    if(n % 2 == 0) cout<<(n/2)<<" "<<(n/2)<<"\n";
    else{
        int x, y;
        int l = INF;
        for(int i=2; i*i<=n; i++){
            if(n % i == 0){
                int curLcm = lcm(i, n-i);
                if(curLcm < l){
                    x = i;
                    y = n - i;
                    l = curLcm;
                }
                
                int ni = n / i;
                curLcm = lcm(ni, n-ni);
                if(curLcm < l){
                    x = ni;
                    y = n - ni;
                    l = curLcm;
                }
            }
        }
        if(l != INF) cout<<x<<" "<<y<<"\n";
        else cout<<1<<" "<<(n-1)<<"\n";
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



