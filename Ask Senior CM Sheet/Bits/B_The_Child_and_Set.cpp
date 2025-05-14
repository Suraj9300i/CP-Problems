#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int sum, limit;
    cin>>sum>>limit;

    map<int, queue<int>> mp;
    for(int i=1; i<=limit; i++){
        int x = i & ((~i) + 1);
        mp[x].push(i);
    }

    vector<int> ans;
    bool flag = true;
    while(sum > 0){
        auto it = mp.upper_bound(sum);
        if(it == mp.begin()){
            flag = false;
            break;
        }
        --it;

        ans.push_back(it->second.front());
        sum -= it->first;
        it->second.pop();
        if(it->second.empty()) mp.erase(it->first);
    }

    if(flag){
        cout<<ans.size()<<"\n";
        for(int ele:ans) cout<<ele<<" ";
    }
    else cout<<"-1";

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



