#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void helper(ll i, ll j, ll n, ll m, vector<vector<ll>>& a, vector<vector<ll>>& b) {
    if(i == n) return;

    if(j == m - 1) {
        cout << a[i][j] + b[i][j] << endl;
        helper(i+1, 0, n, m, a, b);
        return;
    }
    cout << a[i][j] + b[i][j] << " ";
    helper(i, j+1, n, m, a, b);
}

void solve() {
    ll n, m; cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    vector<vector<ll>> b(n, vector<ll>(m));
    
    for(ll i = 0; i < n; i++) {
      for(ll j = 0; j < m; j++) {
        cin >> a[i][j];
      }
    }
    for(ll i = 0; i < n; i++) {
      for(ll j = 0; j < m; j++) {
        cin >> b[i][j];
      }
    }
    

    // Iterative approach 
    // vector<vector<ll>> res(n, vector<ll>(m));
    
    // for(ll i = 0; i < n; i++) {
    //   for(ll j = 0; j < m; j++) {
    //     res[i][j] = a[i][j]+b[i][j];
    //   }
    // }
    // for(ll i = 0; i < n; i++) {
    //   for(ll j = 0; j < m; j++) {
    //     cout << res[i][j] << " ";
    //     }
    //   cout << endl;
    // }

    //without extra result matrix 
    // for(ll i = 0; i < n; i++) {
    //   for(ll j = 0; j < m; j++) {
    //     cout << a[i][j]+b[i][j] << " ";
    //     }
    //   cout << endl;
    // }


    // Recursive approach

    helper(0, 0, n, m, a, b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}