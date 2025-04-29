#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, k;
    cin>>n>>k;
    
    int N = 1000;
    vector<bool> isPrime(N, true);
    for(int i=2; i*i <= N; i++){
        if(isPrime[i]){
            for(int j=i+i; j<=N; j+=i){
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for(int i=2; i<=n; i++){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }

    int cnt = 0;
    int s = primes.size();
    for(int i=1; i<s; i++){
        int sum = primes[i] + primes[i-1] + 1;
        if(sum <= n && isPrime[sum]){
            // cout<<primes[i]<<" "<<primes[i-1]<<"\n";
            cnt++;
        }
    }

    cout<<(cnt >= k ? "YES" : "NO");
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}
