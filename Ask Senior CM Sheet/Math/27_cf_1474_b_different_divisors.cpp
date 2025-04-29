#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;
const int N = 1e6;
vector<int> nextPrime(1000000+1);

void precompute(){
    for(int i=0; i<=N; i++) nextPrime[i] = i;
    for(int i=2; i<=N; i++){
        if(nextPrime[i] == i){
            for(int j=i+i; j<=N; j+=i){
                nextPrime[j] = -1;
            }
        }
    }

    int x = N + 3;
    for(int i=N; i>=0; i--){
        if(nextPrime[i] == i){
            x = i;
        }
        else nextPrime[i] = x;
    }
}

void solve() {
    int n;
    cin>>n;

    int x = nextPrime[n+1];
    int y = nextPrime[x+n];
    int z = x * y;

    cout<<z<<"\n";
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