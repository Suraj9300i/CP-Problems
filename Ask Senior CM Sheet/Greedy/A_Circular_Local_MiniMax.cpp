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

    if(n & 1){
        cout<<"NO\n";
        return;
    }

    sort(arr.begin(), arr.end());
    vector<int> ans(n);
    int mid = n / 2;
    int s = 0, e = mid;
    for(int i=0; i<n; i++){
        ans[i] = (i & 1) ? arr[e++] : arr[s++];
    }

    bool flag = true;
    for(int i=0; i<n; i++){
        if(!((ans[i] > ans[(i-1+n) % n] && ans[i] > ans[(i+1)%n]) || (ans[i] < ans[(i-1+n) % n] && ans[i] < ans[(i+1)%n]))){
            flag = false;
            break;
        }
    }

    if(flag){
        cout<<"YES\n";
        for(int ele:ans) cout<<ele<<" ";
        cout<<"\n";
    }
    else cout<<"No\n";
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