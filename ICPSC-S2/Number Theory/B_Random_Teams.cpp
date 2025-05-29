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
    int n, k;
    cin>>n>>k;

    int x = n - k + 1;
    int q = n / k;
    int rem = n % k;

    int mx = (x * (x-1)) / 2;
    int mn = k * ((q * (q-1)) / 2);
    if(rem > 0){
        int a = rem;
        int b = k - rem;
        mn = a * ((q * (q+1)) / 2);
        mn += (b * ((q * (q-1))/2));
    }

    cout<<mn<<" "<<mx;

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



