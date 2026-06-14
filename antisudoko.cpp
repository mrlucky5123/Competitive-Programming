#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     vector<vector<ll>> grid(9,vector<ll>(9,9));

//     for(ll i = 0; i < 9; i++) {
//         for(ll j = 0; j < 9; j++) {
//             cin >> grid[i][j]; 
//         }
//     }

//     vector<pair<ll, ll>> changes = {
//         {0, 0}, {1, 3}, {2, 6},
//         {3, 1}, {4, 4}, {5, 7},
//         {6, 2}, {7, 5}, {8, 8}
//     };

//     for(auto &it : changes) {
//         ll r = it.first;
//         ll c = it.second;

//         if(grid[r][c] == 9) grid[r][c] = 1;
//         else grid[r][c]++;
//     }

//     for(ll i = 0; i < 9; i++) {
//         for(ll j = 0; j < 9; j++) {
//             cout << grid[i][j];
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

void solve() {
    vector<vector<ll>> grid(9,vector<ll>(9,9));

    for(ll i = 0; i < 9; i++) {
        string s; cin >> s;
        for(ll j = 0; j < 9; j++) {
            grid[i][j] = s[j] - '0';
        }
    }

    vector<pair<ll, ll>> changes = {
        {0, 0}, {1, 3}, {2, 6},
        {3, 1}, {4, 4}, {5, 7},
        {6, 2}, {7, 5}, {8, 8}
    };

    for(auto &it : changes) {
        ll r = it.first;
        ll c = it.second;

        if(grid[r][c] == 9) grid[r][c] = 1;
        else grid[r][c]++;
    }

    for(ll i = 0; i < 9; i++) {
        for(ll j = 0; j < 9; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
    // cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}