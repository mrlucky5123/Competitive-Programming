#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> b(n);
    for(ll i = 0; i < n; i++) {
        cin >> b[i];
    }
    ll m; cin >> m;
    vector<ll> g(m);
    for(ll i = 0; i < m; i++) {
        cin >> g[i];
    }

    sort(b.begin(), b.end());
    sort(g.begin(), g.end());

    ll i = 0, j = 0, ans = 0;

    while(i < n && j < m) {
        if(abs(b[i] - g[j]) <= 1){
            ans++, i++, j++;
        } else if(b[i] < g[j]) {
            i++;
        } else j++;
    }
    cout << ans << endl;
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