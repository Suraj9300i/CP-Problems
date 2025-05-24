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
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    if(n == 1 || (arr[0] + arr[n-1]) % 2 == 0){
        cout<<"0\n";
        return;
    }

    int x = n, y = n;
    for(int i=1; i<n; i++){
        if((arr[i] & 1) != (arr[i-1] & 1)){
            x = i;
            break;
        }
    }

    for(int i=n-2; i>=0; i--){
        if((arr[i] & 1) != (arr[i+1] & 1)){
            y = n - i - 1;
            break;
        }
    }

    cout<<(min(x, y))<<"\n";

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



