#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n;
    cin>>n;
    
    int cnt = n / 2;
    cout<<cnt<<"\n";
    for(int i=0; i<cnt-1; i++) cout<<"2 ";
    if(n&1){ 
        cout<<"3";
    }else{
        cout<<"2";
    }
    
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



