/*  
    Link :- 
    -------------- Learning From This Problem ---------------

    1. first remove unnecessary divisors
    2. Can't apply linear diphantine because it gives integer solution(positive and negative), here we required only positive integers
    3. chicken nugget theorem

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

void precompute(){}

void solve() {
    int n;
    cin>>n;

    int mx = (11 * 111) - 11 - 111;
    if(n > mx) cout<<"YES\n";
    else{
        bool flag = false;
        for(int i=0; i<=11; i++){
            int rem = n - (111 * i);
            if(rem >= 0 && rem % 11 == 0){
                flag = true;
                break;
            }
        }
        cout<<(flag ? "YES" : "NO")<<"\n";
    }
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



