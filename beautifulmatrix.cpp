// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int r = 0;
//     int c = 0;
//     int matrix[5][5];
//     for(int i = 0; i < 5; i++){
//         for(int j = 0; j < 5; j++) {
//             cin >> matrix[i][j];
//             if(matrix[i][j] == 1) {
//                 r = i;
//                 c = j;
//             }
//         }
//     }
//     int row_move = abs(r-2);
//     int col_move = abs(c-2);
//     int total = row_move + col_move;
//     cout << total << endl;
// }

#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n = 5;
    ll a = 0, b = 0;
    vector<vector<ll>> grid(n+1, vector<ll>(n+1));
    
    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= n; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == 1) {
                a = i;
                b = j;
            }
        }
    }

    ll move1 = abs(a - 3);
    ll move2 = abs(b - 3);
    cout << move1 + move2 << endl;
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