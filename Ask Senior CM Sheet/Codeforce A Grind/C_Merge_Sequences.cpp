#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, m;
    cin>>n>>m;
    vector<int> arr(n), brr(m);
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<m; i++) cin>>brr[i];

    int x = 1;
    vector<int> ans1, ans2;
    int i = 0, j= 0;
    while(i < n && j < m){
        if(arr[i] < brr[j]){
            ans1.push_back(x++);
            i++;
        }
        else{
            ans2.push_back(x++);
            j++;
        }
    }
    while(i < n){
        ans1.push_back(x++);
        i++;
    }
    while(j < m){
        ans2.push_back(x++);
        j++;
    }
    for(int ele:ans1) cout<<ele<<" ";
    cout<<"\n";
    for(int ele:ans2) cout<<ele<<" ";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



