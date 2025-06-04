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
    vector<int> arr(n);
    int mx = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mx = max(mx, arr[i]);
    }

    for(int k=1; k<=1024; k++){
        vector<int> v(1025, 0);
        for(int ele:arr) v[ele]++;

        for(int ele:arr){
            int x = ele ^ k;
            if(x > mx) break;
            v[x]--;
        }

        bool flag = true;
        for(int i=0; i<1025; i++){
            if(v[i] != 0){
                flag = false;
                break;
            }
        }

        if(flag){
            cout<<k<<"\n";
            return;
        }
    }

    cout<<"-1\n";
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



