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
    int used = 0;
    int unused = 0;
    bool flag = true;

    for(int i=0; i<n; i++){
        if(d[i] != -1){
            ans[i] = d[i];
            cur_height += d[i];
        }
        else{
            if(cur_height < obs[i].first){
                ans[i] = 1;
                cur_height += 1;
            }else{
                ans[i] = 0;
                unused += 1;
            }
        }

        if(cur_height > obs[i].second){
            flag = false;
            break;
        }
        
        if(cur_height < obs[i].first){
            int req = obs[i].first - cur_height;
            if(unused > 0 && req <= unused){
                unused -= req;
                cur_height += req;
                used += req;
            }
            else{
                flag = false;
                break;
            }
        }
    }

    if(flag){
        if(used > 0){
            int sum = 0;
            for(int i=0; i<n; i++){
                if(d[i] == -1 && ans[i] == 0 && used > 0){
                    if((sum + 1) >= obs[i].first && (sum + 1) <= obs[i].second){
                        sum++;
                        used--;
                        ans[i] = 1;
                    }
                }
                else sum += ans[i];

                if(sum < obs[i].first || sum > obs[i].second){
                    flag = false;
                    break;
                }
            }
        }

        if(!flag || used > 0) cout<<"-1\n";
        else{
            for(int ele:ans) cout<<ele<<" ";
            cout<<"\n";
        }
    }
    else cout<<"-1\n";

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



