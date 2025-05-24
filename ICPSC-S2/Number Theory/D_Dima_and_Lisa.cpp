/*  
    Link :- https://codeforces.com/problemset/problem/584/D
    -------------- Learning From This Problem ---------------

    Difference between consecutive primes is max 282

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

void precompute(){}

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i=2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin>>n;

    if(isPrime(n)){
        cout<<1<<"\n"<<n;
        return;
    }

    vector<int> primes = {
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
        31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
        73, 79, 83, 89, 97, 101, 103, 107, 109, 113,
        127, 131, 137, 139, 149, 151, 157, 163, 167, 173,
        179, 181, 191, 193, 197, 199, 211, 223, 227, 229,
        233, 239, 241, 251, 257, 263, 269, 271, 277, 281,
        283, 293
    };

    int x = -1, y = -1, z = -1;
    for(int p1:primes){
        for(int p2:primes){
            int rem = n - p1 - p2;
            if(isPrime(rem)){
                x = p1;
                y = p2;
                z = rem;
                break;
            }
        }
        if(z != -1) break;
    }

    cout<<"3\n";
    cout<<x<<" "<<y<<" "<<z;
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



