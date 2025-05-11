#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    multiset<int> st(arr.begin(), arr.end());
    int low = 0, high = n;
    int ans = low;
    while(low <= high){
        int mid = low + (high - low) / 2;
        int k = mid;
        multiset<int> ts = st;

        while(k > 0){
            auto it = ts.upper_bound(k);
            if(it == ts.begin()) break;

            ts.erase(--it);
            if(!ts.empty()){
                int mn = *ts.begin();
                ts.erase(ts.begin());
                ts.insert(mn + mid);
            }
            k--;
        }

        if(k == 0){
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }

    cout<<ans<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



