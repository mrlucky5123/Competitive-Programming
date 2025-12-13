#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    ll max_diff = 0;
    for (ll i = 0; i < n / 2; i++) {
        ll diff = abs(a[2 * i + 1] - a[2 * i]);
        max_diff = max(max_diff, diff);
    }
    
    cout << max_diff << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}