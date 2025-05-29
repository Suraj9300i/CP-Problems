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
    int n, l, r;
    cin>>n;

    vector<int> d(n);
    for(int i=0; i<n; i++){
        cin>>d[i];
    }

    vector<pair<int, int>> obs(n);
    for(int i=0; i<n; i++){
        cin>>l>>r;
        obs[i] = {l, r};
    }

    int cur_height = 0;
    vector<int> ans(n);
    vector<int> unused;

    for(int i=0; i<n; i++){
        if(d[i] != -1){
            cur_height += d[i];
            ans[i] = d[i];
        }else{
            unused.push_back(i);
        }

        while(cur_height < obs[i].first){
            if(unused.empty()){
                cout<<"-1\n";
                return;
            }
            cur_height++;
            ans[unused.back()] = 1;
            unused.pop_back();
        }

        while((cur_height + unused.size()) > obs[i].second){
            if(unused.empty()){
                cout<<"-1\n";
                return;
            }
            ans[unused.back()] = 0;
            unused.pop_back();
        }
    }

    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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



