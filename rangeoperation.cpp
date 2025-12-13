#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    ll sum = 0, ans = 0, max_val = 0;

    for(ll i = 1; i <= n; i++) {
        max_val = max(max_val, -(ll)i*i + i + sum);
        cin >> a[i - 1]; sum += a[i-1];
        ans = max(ans, (ll)i*i + i - sum + max_val);
    }
    cout << ans + sum << endl;
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