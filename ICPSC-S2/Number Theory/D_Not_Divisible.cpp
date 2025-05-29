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

vector<int> getDivisors(int n){
    vector<int> v;
    int temp = n;
    for(int i=1; i*i<=n; i++){
        if(n % i == 0){
            int x = i;
            int y = n / i;
            v.push_back(x);
            if(x != y) v.push_back(y);
        }
    }
    return v;
}

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    map<int, int> mp;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        vector<int> divs = getDivisors(arr[i]);
        bool flag = true;
        for(int div:divs){
            if(div == arr[i]){
                if(mp[div] > 1){
                    flag = false;
                    break;
                }
            }else{
                if(mp[div] > 0){
                    flag = false;
                    break;
                }
            }
        }
        if(flag) ans++;
    }

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



