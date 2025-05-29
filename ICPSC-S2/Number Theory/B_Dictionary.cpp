/*  
    Link :- 
    -------------- Learning From This Problem ---------------

    

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;
map<string, int> mp;

void precompute(){
    int x = 0;
    for(int i=0; i<26; i++){
        for(int j=0; j<26; j++){
            char a = 'a' + i;
            char b = 'a' + j;
            if(a != b){
                string str = "";
                str.push_back(a);
                str.push_back(b);
                mp[str] = ++x;
            }
        }
    }
}

void solve() {
    string str;
    cin>>str;
    cout<<mp[str]<<"\n";

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



