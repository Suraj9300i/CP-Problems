#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

int calc(vector<int> &arr, int n){
    vector<int> prefix(n, 0);
    if(arr[n-1] == 0) prefix[n-1] = 1;
    for(int i=n-2; i>=0; i--){
        prefix[i] = prefix[i+1];
        if(arr[i] == 0){
            prefix[i] += 1;
        }
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            ans += prefix[i];
        }
    }

    return ans;
}

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = calc(arr, n);

    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            arr[i] = 1;
            ans = max(ans, calc(arr, n));
            arr[i] = 0;
            break;
        }
    }

    for(int i=n-1; i>=0; i--){
        if(arr[i] == 1){
            arr[i] = 0;
            ans = max(ans, calc(arr, n));
            arr[i] = 1;
            break;
        }
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



