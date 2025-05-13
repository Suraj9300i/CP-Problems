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

    int x = n-1;
    for(int i=n-2; i>=0; i--){
        if(arr[i] > arr[i+1]){
            x = i;
            break;
        }
    }

    if(x == n-1){
        cout<<"0\n";
        return;
    }

    set<int> st;
    for(int i=0; i<=x; i++){
        st.insert(arr[i]);
    }

    for(int i=n-1; i>x; i--){
        if(st.find(arr[i]) != st.end()){
            for(int j=x; j<=i; j++){
                st.insert(arr[j]);
            }
            break;
        }
    }

    cout<<(st.size())<<"\n";
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



