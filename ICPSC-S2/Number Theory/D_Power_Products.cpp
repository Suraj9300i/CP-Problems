/*  
    Link :- https://codeforces.com/problemset/problem/1225/D
    -------------- Learning From This Problem ---------------

    

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

void precompute(){}

map<int, int> factors(int n){
    map<int, int> mp;
    int x = n;
    for(int i=2; i*i <= x; i++){
        if(i > x) break;
        while(x % i == 0){
            mp[i]++;
            x /= i;
        }
    }
    if(x > 1) mp[x]++;

    return mp;
}

int getPow(int n, int p){
    if(p == 0) return 1;
    if(p & 1) return n * getPow(n, p-1);
    int x = getPow(n, p/2);
    return (x*x);
}

void solve() {
    int n, k;
    cin>>n>>k;

    vector<int> arr(n);
    vector<int> reduced(n);
    vector<int> comp(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int c1 = 0, ccm = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            c1++;
            continue;
        }

        auto fac = factors(arr[i]);
        int rd = 1, cm = 1;
        for(auto it:fac){
            int r = it.second % k;
            if(r != 0){
                rd *= (getPow(it.first, r));
                cm *= (getPow(it.first, k - r));
            }
        }
        reduced[i] = rd;
        comp[i] = cm;
        if(cm == 1) ccm++;
    }

    int ans = 0;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        if(arr[i] == 1) continue;
        ans += mp[comp[i]];
        mp[reduced[i]]++;
    }

    ans += ((c1 * (c1-1)) / 2);
    ans += (c1 * ccm);

    cout<<ans;
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



