#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, x, y, z, m;
    cin>>n>>x>>y>>z;
    
    vector<int> math(n), eng(n);
    for(int i=0; i<n; i++){
        cin>>math[i];
    }
    for(int i=0; i<n; i++){
        cin>>eng[i];
    }

    set<int> ans;
    struct cmp {
        bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first == b.first)
                return a.second < b.second; // higher second first
            return a.first > b.first;       // higher first first
        }
    };
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    for(int i=0; i<n; i++){
        pq.push({math[i], i});
        if(pq.size() > x) pq.pop();
    }

    while(!pq.empty()){
        ans.insert(pq.top().second);
        pq.pop();
    }

    for(int i=0; i<n; i++){
        if(ans.find(i) == ans.end()) pq.push({eng[i], i});
        if(pq.size() > y) pq.pop();
    }

    while(!pq.empty()){
        ans.insert(pq.top().second);
        pq.pop();
    }

    for(int i=0; i<n; i++){
        if(ans.find(i) == ans.end()) pq.push({math[i] + eng[i], i});
        if(pq.size() > z) pq.pop();
    }

    while(!pq.empty()){
        ans.insert(pq.top().second);
        pq.pop();
    }
    for(int ele:ans) cout<<(ele + 1)<<"\n";
    
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



