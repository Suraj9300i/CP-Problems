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

void solve() {
    int n;
    cin>>n;

    vector<vector<int>> patterns = {
        {74},         // 75
        {24, 2},      // 25 * 3
        {14, 4},      // 15 * 5
        {4, 4, 2}     // 5 * 5 * 3
    };

    map<int, int> mp;
    for(int i=2; i<=n; i++){
        int temp = i;
        for(int j=2; j*j <= i; j++){
            if(j > temp) break;
            while(temp % j == 0){
                mp[j]++;
                temp /= j;
            }
        }
        if(temp > 1) mp[temp]++;
    }

    vector<int> exponents;
    for (auto &[p, e] : mp) {
        exponents.push_back(e);
    }

    int totalWays = 0;

    // Case 1: Single exponent == 74
    for (int e : exponents) {
        if (e >= 74) totalWays++;
    }

    // Case 2: One exponent >= 24, one >= 2 (distinct)
    for (int i = 0; i < exponents.size(); i++) {
        if (exponents[i] >= 24) {
            for (int j = 0; j < exponents.size(); j++) {
                if (i != j && exponents[j] >= 2)
                    totalWays++;
            }
        }
    }

    // Case 3: One exponent >= 14, one >= 4 (distinct)
    for (int i = 0; i < exponents.size(); i++) {
        if (exponents[i] >= 14) {
            for (int j = 0; j < exponents.size(); j++) {
                if (i != j && exponents[j] >= 4)
                    totalWays++;
            }
        }
    }

    // Case 4: Two exponents >= 4, one >= 2 (all distinct)
    for (int i = 0; i < exponents.size(); i++) {
        if (exponents[i] >= 4) {
            for (int j = i + 1; j < exponents.size(); j++) {
                if (exponents[j] >= 4) {
                    for (int k = 0; k < exponents.size(); k++) {
                        if (k != i && k != j && exponents[k] >= 2)
                            totalWays++;
                    }
                }
            }
        }
    }

    cout<<totalWays;

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



