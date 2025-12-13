#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    ll total = n*n;
    ll m = total - k;
    if(m == 1) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    vector<string> res(n, string(n, 'U'));
    ll q = m / n;
    ll r = m % n;

    for(ll i = n - q; i < n; i++) {
        for(ll j = 0; j < n-1; j++) {
            res[i][j] = 'R';
        }
        res[i][n-1] = 'L';
    }

    if(r > 0) {
        ll partial_row = n - q - 1;
        if(r >= 2) {
            for(ll j = 0; j < r - 1; j++) {
                res[partial_row][j] = 'R';
            }
            res[partial_row][r-1] = 'L';
        } else {
            res[partial_row][0] = 'D';
        } 
    }
    for(auto& i : res) {
        cout << i << endl;
    }
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