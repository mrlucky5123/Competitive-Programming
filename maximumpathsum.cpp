#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// ll maxpathsum(vector<vector<ll>>& matrix, ll n, ll m, ll i, ll j) {
//     // base case: (n,m)
//     if (i == n - 1 && j == m - 1) {
//         return matrix[i][j];
//     }

//     // last row, but columns remain
//     if(i == n - 1) {
//         return matrix[i][j] + maxpathsum(matrix, n, m, i, j+1);
//     }

//     // last col, but rows remain
//     if(j == m - 1) {
//         return matrix[i][j] + maxpathsum(matrix, n, m, i+1, j);
//     }

//     // else choose max(right, down)
//     ll rightSum = maxpathsum(matrix, n, m, i, j+1);
//     ll downSum = maxpathsum(matrix, n, m, i+1, j);

//     return matrix[i][j] + max(rightSum, downSum);
// }

// void solve() {
//     ll n, m; cin >> n >> m;
//     vector<vector<ll>> matrix(n, vector<ll>(m));
//     for(ll i = 0; i < n; i++) {
//         for(ll j = 0; j < m; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     ll sum = maxpathsum(matrix, n, m, 0, 0);
//     cout << sum << endl;
// }

ll maxpathsum(vector<vector<ll>>& matrix, vector<vector<ll>>& dp, ll n, ll m, ll i, ll j) {
    if(dp[i][j] != LLONG_MIN) {
        return dp[i][j];
    }

    if(i == n - 1 && j == m - 1) {
        return dp[i][j] = matrix[i][j];
    }

    ll result;

    if(i == n - 1) {
        result = matrix[i][j] + maxpathsum(matrix, dp, n, m, i , j+1);
    } else if(j == m - 1) {
        result = matrix[i][j] + maxpathsum(matrix, dp, n, m, i+1, j);
    } else {
        ll rightSum = maxpathsum(matrix, dp, n, m, i, j+1);
        ll downSum = maxpathsum(matrix, dp, n, m, i+1, j);
        result = matrix[i][j] + max(rightSum, downSum);
    }

    return dp[i][j] = result;
}

void solve() {
    ll n, m; cin >> n >> m;
    vector<vector<ll>> matrix(n, vector<ll>(m));
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<ll>> dp(n, vector<ll>(m, LLONG_MIN));

    ll sum = maxpathsum(matrix, dp, n, m, 0, 0);
    cout << sum << endl;
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