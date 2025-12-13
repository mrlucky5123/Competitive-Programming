#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<vector<char>> mat(n, vector<char>(n));
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    ll ans = 0;

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            ll cnt_0 = 0, cnt_1 = 0;
            if(mat[i][j] == '0') cnt_0++;
            else cnt_1++;

            if(mat[j][n-1-i] == '0')cnt_0++;
            else cnt_1++;

            if(mat[n-1-i][n-1-j] == '0') cnt_0++;
            else cnt_1++;

            if(mat[n-1-j][i] == '0') cnt_0++;
            else cnt_1++;

            if(cnt_0 == 0 || cnt_1 == 0) continue;

            // 1's are in minority, so change all 1s to 0s
            if(cnt_0 >= cnt_1) {
                ans += cnt_1;
                mat[i][j] = '0';
                mat[j][n-1-i] = '0';
                mat[n-1-i][n-1-j] = '0';
                mat[n-1-j][i] = '0';
            } else {
                // 0's are in minority, so change all 0s to 1s
                ans+= cnt_0;
                mat[i][j] = '1';
                mat[j][n-1-i] = '1';
                mat[n-1-i][n-1-j] = '1';
                mat[n-1-j][i] = '1';
            }
        }
    }
    cout << ans << endl;
}

// T.C := O(t * n^2)
// S.C := O(t * n^2)

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