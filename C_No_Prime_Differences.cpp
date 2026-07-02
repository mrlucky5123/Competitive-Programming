#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, m; cin >> n >> m; 
    vector<vector<ll>> ans(n, vector<ll> (m));
    ll cnt = 1;
    for(ll i = 1; i < n; i+=2) {
        for(ll j = 0; j < m; j++) {
            ans[i][j] = cnt;
            cnt++;
        }
    }
    for(ll i = 0; i < n; i+=2) {
        for(ll j = 0; j < m; j++) {
            ans[i][j] = cnt;
            cnt++;
        }
    }
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
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