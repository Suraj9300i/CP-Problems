/*  
    Link :- 
    -------------- Learning From This Problem ---------------

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e18;

void precompute(){}

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int s1 = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        s1 += arr[i];
    }

    // sort(arr.begin(), arr.end());
    int s2 = 0;
    for(int i = 0; i < n; i++){
        s2 += i*arr[i] - (n-1-i)*arr[i];
    }


    int num = s1 + (2 * s2);
    int den = n;
    int g = gcd(num, den);

    cout<<(num / g)<<" "<<(den / g);
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



