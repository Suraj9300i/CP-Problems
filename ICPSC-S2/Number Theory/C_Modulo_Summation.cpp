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

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x % y);
}

int lcm(int x, int y){
    return (x * y) / gcd(x, y);
}

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int end = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        end += arr[i];
    }

    cout<<(end - n);
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



