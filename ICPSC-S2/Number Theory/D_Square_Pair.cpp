/*  
    Link :- https://atcoder.jp/contests/abc342/tasks/abc342_d
    -------------- Learning From This Problem ---------------

    

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;
const int N = 200000;
vector<int> spf(N+1);

void precompute(){
    for(int i=1; i<=N; i++) spf[i] = i;

    for(int i=2; i*i <= N; i++){
        if(spf[i] == i){
            for(int j=i+i; j<=N; j+=i){
                if(spf[j] == j) spf[j] = i;
            }
        }
    }
}

map<int, int> getFactors(int n){
    map<int, int> mp;
    while(n > 1){
        mp[spf[n]]++;
        n /= spf[n];
    }
    return mp;
}

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int z = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] == 0) z++;
    }

    vector<int> reduced(n);

    for(int i=0; i<n; i++){
        if(arr[i] == 0) continue;
        auto fac = getFactors(arr[i]);
        int red = 1;
        for(auto it:fac){
            if(it.second % 2 == 1){
                red *= it.first;
            }
        }
        reduced[i] = red;
    }

    int ans = 0;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        if(arr[i] == 0) continue;
        if(mp.find(reduced[i]) != mp.end()){
            ans += mp[reduced[i]];
        }
        mp[reduced[i]]++;
    }

    for(int i=1; i<=z; i++) ans += (n - i);

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



