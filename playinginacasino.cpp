#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, m; cin >> n >> m;
    
    vector<vector<ll>> v(m, vector<ll>(n));

    for(ll j = 0; j < n; j++) {
        for(ll i = 0; i < m; i++) {
            cin >> v[i][j];
        }
    }
    for(ll i = 0; i < m; i++) {
        sort(v[i].begin(), v[i].end());
    }
    ll ans = 0;
    for(ll i = 0; i < m; i++) {
        for(ll j = 0; j < n; j++) {
            ans -= (v[i][j] * (n-j-1));
            ans += (v[i][j] * j);
        }
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
