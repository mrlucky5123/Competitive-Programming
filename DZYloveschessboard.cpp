#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n, m;
//     cin >> n >> m;
//     vector<vector<char>> board(n+1, vector<char>(m+1));
//     for(ll i = 1; i <= n; i++) {
//         for(ll j = 1; j <= m; j++)
//             cin >> board[i][j];
//     }

//     for(ll i = 1; i <= n; i++) {
//         for(ll j = 1; j <= m; j++) {
//             if(board[i][j] == '-') continue;
//             else if(board[i][j] == '.' && (i&1) && (j&1)) board[i][j] = 'B';
//             else if(board[i][j] == '.' && (i&1) && !(j&1)) board[i][j] = 'W';
//             else if(board[i][j] == '.' && !(i&1) && (j&1)) board[i][j] = 'W';
//             else if(board[i][j] == '.' && !(i&1) && !(j&1)) board[i][j] = 'B';
//         }
//     }
    
//     for(ll i = 1; i <= n; i++) {
//         for(ll j = 1; j <= m; j++) {
//             cout << board[i][j];
//         }
//         cout << endl;
//     }
// }

// void solve() {
//     ll n, m; cin >> n >> m;

//     for(ll i = 0; i < n; i++) {
//         for(ll j = 0; j < m; j++) {
//             char ch; cin >> ch;
//             if(ch == '-') cout << '-';
//             else cout << (((i + j) % 2 == 0) ? 'B' : 'W');
//         }
//         cout << endl;
//     }
// }

ll n, m;
vector<vector<char>> board;

void dfs(ll x, ll y, char color) {
    // base case: out of bounds or not '.'
    if(x < 0 || x >= n || y < 0 || y >= m) return;
    if(board[x][y] != '.') return;

    // color the current cell 
    board[x][y] = color;

    // prepare the next opposite color
    char nextColor = (color == 'B') ? 'W' : 'B';

    // recursive calls in 4 directions
    dfs(x+1, y, nextColor);
    dfs(x-1, y, nextColor);
    dfs(x, y+1, nextColor);
    dfs(x, y-1, nextColor);
}

void solve(){
    cin >> n >> m;
    board.resize(n, vector<char>(m));

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) cin >> board[i][j];
    }

    // start dfs coloring from first '.' cell 
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            if(board[i][j] == '.') {
                // start coloring with 'B'
                dfs(i, j, 'B');
            }
        }
    }

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}