#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;
const int N = 1000000;
vector<int> aw(N+1, 0);
vector<int> ab(N+1, 0);
vector<int> bw(N+1, 0);
vector<int> bb(N+1, 0);

void precompute(){
    int card = 1;
    bool player = false; // bob
    aw[1] = 1;
    for(int i=2; card <= N ;i++){
        for(int j=1; j<=i; j++){
            card++;
            if(card > N) break;
            if(player){ // alice;
                if(card & 1) aw[card]++;
                else ab[card]++;
            }
            else{ // bob
                if(card & 1) bw[card]++;
                else bb[card]++;
            }
        }
        i++;

        for(int j=1; j<=i; j++){
            card++;
            if(card > N) break;
            if(player){ // alice;
                if(card & 1) aw[card]++;
                else ab[card]++;
            }
            else{ // bob
                if(card & 1) bw[card]++;
                else bb[card]++;
            }
        }

        player = !player;
    }
    for(int i=1; i<=N; i++) aw[i] += aw[i-1];
    for(int i=1; i<=N; i++) ab[i] += ab[i-1];
    for(int i=1; i<=N; i++) bw[i] += bw[i-1];
    for(int i=1; i<=N; i++) bb[i] += bb[i-1];
}


void solve() {
    int n;
    cin>>n;
    cout<<aw[n]<<" "<<ab[n]<<" "<<bw[n]<<" "<<bb[n]<<"\n";

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



