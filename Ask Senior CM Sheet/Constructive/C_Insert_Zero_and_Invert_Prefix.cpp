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

    if(arr[n-1] == 1){
        cout<<"NO\n";
        return;
    }

    vector<int> ans;
    for(int i=n-1; i>=0; i--){
        if(arr[i] == 0){
            ans.push_back(0);
        }else{
            int cnt = 0;
            int j=i;
            for(; j>=0; j--){
                if(arr[j] == 1) cnt++;
                else break;
            }

            for(int k=0; k<cnt-1; k++) ans.push_back(0);
            ans.push_back(cnt);

            i = j+1;
        }
    }

    cout<<"YES\n";
    for(int ele:ans) cout<<ele<<" ";
    cout<<"\n";
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



