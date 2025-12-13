#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n, m; cin >> n >> m;
//     vector<vector<char>> board(n, vector<char>(m));
//     for(ll i = 0; i < n; i++) {
//         for(ll j = 0; j < m; j++) {
//             cin >> board[i][j];
//         }
//     }
//     // for(ll i = 0; i < n; i++) {
//     //     for(ll j = 0; j < m; j++) {
//     //         cout << board[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }

//     bool row1 = true, rowlast = true, col1 = true, collast = true;

//     //row1
//     for(ll i = 1; i < m; i++) {
//         if(board[0][i] != board[0][i-1]) {
//             row1 = false;
//             break;
//         } 
//     }

//     // rowlast
//     for(ll i = 1; i < m; i++) {
//         if(board[n-1][i] != board[n-1][i-1]) {
//             rowlast = false;
//             break;
//         }
//     }
//     //col1
//     for(ll i = 1; i < n; i++) {
//         if(board[i][0] != board[i-1][0]) {
//             col1 = false;
//             break;
//         } 
//     }

//     // rowlast
//     for(ll i = 1; i < n; i++) {
//         if(board[i][m-1] != board[i-1][m-1]) {
//             collast = false;
//             break;
//         }
//     }

//     if((row1 && rowlast) || (col1 && collast)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
// }

void solve() {
    ll n, m; cin >> n >> m;
    vector<vector<char>> board(n, vector<char>(m));
    for(ll i = 0; i < n; i++) {
        string s; cin >> s;
        for(ll j = 0; j < m; j++) {
            board[i][j] = s[j];
        }
    }

    if(board[0][0] == board[n-1][m-1] || board[0][m-1] == board[n-1][0]) {
        cout << "YES" << endl;
        return;
    }
    string ans = "YES";
    bool impossible = true;
    for(ll j = 0; j < m - 1; j++) {
        if(board[0][j] != board[0][j+1] || board[n-1][j] != board[n-1][j+1]) {
            impossible = false;
            break;
        }
    }
    if(impossible) {
        ans = "NO";
    }

    impossible = true;
    for(ll i = 0; i < n - 1; i++) {
        if(board[i][0] != board[i+1][0] || board[i][m-1] != board[i+1][m-1]) {
            impossible = false;
            break;
        }
    }

    if(impossible) {
        ans = "NO";
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}