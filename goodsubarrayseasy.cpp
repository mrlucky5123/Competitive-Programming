#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n+1);
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
    }

    ll left = 1, ans = 0;
    for(ll r = 1; r <= n; r++) {
        left = max(left, r - a[r] + 1);
        ans += r - left + 1;
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