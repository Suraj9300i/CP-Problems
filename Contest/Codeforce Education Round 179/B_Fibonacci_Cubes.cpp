/*  
    Link :- 
    -------------- Learning From This Problem ---------------

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;
vector<int> fib(12);

void precompute(){
    fib[1] = 1;
    fib[2] = 2;
    for(int i=3; i<=11; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
}

void solve() {
    int n, m, l, b, h;
    cin>>n>>m;
    vector<int> arr(3);
    string ans = "";
    for(int i=0; i<m; i++){
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr.begin(), arr.end());

        if(arr[0] >= fib[n] && arr[2] >= fib[n+1]) ans.push_back('1');
        else ans.push_back('0');
    }

    cout<<ans<<"\n";

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



