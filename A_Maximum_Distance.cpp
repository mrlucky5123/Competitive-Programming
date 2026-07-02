#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> x(n), y(n);
    for(ll i = 0; i < n; i++) cin >> x[i];
    for(ll i = 0; i < n; i++) cin >> y[i];

    ll high = 0;
    for(ll i = 0; i < n-1; i++) {
        for(ll j = i+1; j < n; j++) {
            ll dx = x[j]-x[i];
            ll dy = y[j]-y[i];
            ll dis = dx*dx + dy*dy;
            high = max(high, dis);
        }
    }
    cout << high << endl;
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