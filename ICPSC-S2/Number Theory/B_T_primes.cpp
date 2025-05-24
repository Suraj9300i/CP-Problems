/*  
    Link :- 
    -------------- Learning From This Problem ---------------

    

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;
const int N = 1000007;
vector<bool> isPrime;
set<int> st;

void precompute(){
    isPrime.resize(N+1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i=2; i*i <= N; i++){
        if(isPrime[i]){
            for(int j=i+i; j<=N; j+=i){
                isPrime[j] = false;
            }
        }
    }
    for(int i=2; i<=N; i++){
        if(isPrime[i]){
            st.insert(i * i);
        }
    }
}

void solve() {
    int n, x;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>x;

        bool flag = false;
        if(st.find(x) != st.end()) flag = true;
        cout<<(flag ? "YES" : "NO")<<"\n";
    }
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



