#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;


void solve() {
    int n, m;
    cin>>n>>m;
    vector<string> board(n);
    for(int i=0; i<n; i++){
        cin>>board[i];
    }
    bool flag = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(board[i][j] == 's'){
                if(j+4 < m && (board[i][j+1] == 'n' && board[i][j+2] == 'u' && board[i][j+3] == 'k' && board[i][j+4] == 'e')){
                    flag = true;
                    i++, j++;
                    cout<<i<<" "<<(j)<<"\n";
                    cout<<i<<" "<<(j+1)<<"\n";
                    cout<<i<<" "<<(j+2)<<"\n";
                    cout<<i<<" "<<(j+3)<<"\n";
                    cout<<i<<" "<<(j+4)<<"\n";
                    break;
                }

                if(j-4 >= 0 && (board[i][j-1] == 'n' && board[i][j-2] == 'u' && board[i][j-3] == 'k' && board[i][j-4] == 'e')){
                    flag = true;
                    i++, j++;
                    cout<<i<<" "<<(j)<<"\n";
                    cout<<i<<" "<<(j-1)<<"\n";
                    cout<<i<<" "<<(j-2)<<"\n";
                    cout<<i<<" "<<(j-3)<<"\n";
                    cout<<i<<" "<<(j-4)<<"\n";
                    break;
                }

                if(i+4 < n && (board[i+1][j] == 'n' && board[i+2][j] == 'u' && board[i+3][j] == 'k' && board[i+4][j] == 'e')){
                    flag = true;
                    i++, j++;
                    cout<<i<<" "<<(j)<<"\n";
                    cout<<i+1<<" "<<(j)<<"\n";
                    cout<<i+2<<" "<<(j)<<"\n";
                    cout<<i+3<<" "<<(j)<<"\n";
                    cout<<i+4<<" "<<(j)<<"\n";
                    break;
                }

                if(i-4 >= 0 && (board[i-1][j] == 'n' && board[i-2][j] == 'u' && board[i-3][j] == 'k' && board[i-4][j] == 'e')){
                    flag = true;
                    i++, j++;
                    cout<<i<<" "<<(j)<<"\n";
                    cout<<i-1<<" "<<(j)<<"\n";
                    cout<<i-2<<" "<<(j)<<"\n";
                    cout<<i-3<<" "<<(j)<<"\n";
                    cout<<i-4<<" "<<(j)<<"\n";
                    break;
                }

                if(i-4 >= 0 && j-4 >= 0 && (board[i-1][j-1] == 'n' && board[i-2][j-2] == 'u' && board[i-3][j-3] == 'k' && board[i-4][j-4] == 'e')){
                    flag = true;
                    i++, j++;
                    cout<<i<<" "<<(j)<<"\n";
                    cout<<i-1<<" "<<(j-1)<<"\n";
                    cout<<i-2<<" "<<(j-2)<<"\n";
                    cout<<i-3<<" "<<(j-3)<<"\n";
                    cout<<i-4<<" "<<(j-4)<<"\n";
                    break;
                }

                if(i+4 < n && j+4 < m && (board[i+1][j+1] == 'n' && board[i+2][j+2] == 'u' && board[i+3][j+3] == 'k' && board[i+4][j+4] == 'e')){
                    flag = true;
                    i++, j++;
                    cout<<i<<" "<<(j)<<"\n";
                    cout<<i+1<<" "<<(j+1)<<"\n";
                    cout<<i+2<<" "<<(j+2)<<"\n";
                    cout<<i+3<<" "<<(j+3)<<"\n";
                    cout<<i+4<<" "<<(j+4)<<"\n";
                    break;
                }

                if(i-4 >= 0 && j+4 < m && (board[i-1][j+1] == 'n' && board[i-2][j+2] == 'u' && board[i-3][j+3] == 'k' && board[i-4][j+4] == 'e')){
                    flag = true;
                    i++, j++;
                    cout<<i<<" "<<(j)<<"\n";
                    cout<<i-1<<" "<<(j+1)<<"\n";
                    cout<<i-2<<" "<<(j+2)<<"\n";
                    cout<<i-3<<" "<<(j+3)<<"\n";
                    cout<<i-4<<" "<<(j+4)<<"\n";
                    break;
                }

                if(i+4 < n && j-4 >= 0 && (board[i+1][j-1] == 'n' && board[i+2][j-2] == 'u' && board[i+3][j-3] == 'k' && board[i+4][j-4] == 'e')){
                    flag = true;
                    i++, j++;
                    cout<<i<<" "<<(j)<<"\n";
                    cout<<i+1<<" "<<(j-1)<<"\n";
                    cout<<i+2<<" "<<(j-2)<<"\n";
                    cout<<i+3<<" "<<(j-3)<<"\n";
                    cout<<i+4<<" "<<(j-4)<<"\n";
                    break;
                }
            }
        }
        if(flag) break;
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



