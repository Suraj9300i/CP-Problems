#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;
const int N = 8;

vector<vector<char>> board(N, vector<char>(N));

bool isSafe(int r, int c){
    if(board[r][c] == '*') return false;

    for(int i=0; i<r; i++){
        if(board[i][c] == 'Q'){
            return false;
        }
    }

    for(int i=r-1, j=c-1; i >= 0 && j >= 0; i--, j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    for(int i=r-1, j=c+1; i >= 0 && j < N; i--, j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    return true;
}

int rec(int r){
    if(r == N) return 1;

    int cnt = 0;
    for(int c=0; c<N; c++){
        if(isSafe(r, c)){
            board[r][c] = 'Q';
            cnt += rec(r+1);
            board[r][c] = '.';
        }
    }

    return cnt;
}

void solve() {
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>board[i][j];
        }
    }

    int ans = rec(0);
    cout<<ans;
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



