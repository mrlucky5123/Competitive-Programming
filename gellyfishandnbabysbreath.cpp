#include<bits/stdc++.h>
#define ll long long
#define MOD (998244353)
ll po[1000001];
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> b(n);
    for(ll i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<ll> pos_a(n), pos_b(n); // positions of elements i in array a and b
    for(ll i = 0; i < n; i++) {
        pos_a[a[i]] = i;
        pos_b[b[i]] = i;
    }
    vector<ll> ans;
    ll pa = a[0], pb = b[0];

    for(ll i = 0; i < n; i++) {
        pa = max(pa, a[i]);
        pb = max(pb, b[i]);

        pair<ll, ll> p1 = make_pair(pa, b[i-pos_a[pa]]);
        pair<ll, ll> p2 = make_pair(pb, a[i-pos_b[pb]]);
        pair<ll, ll> ans_p = max(p1,p2);

        ans.push_back((po[ans_p.first] + po[ans_p.second]) % MOD);
    }

    for(ll i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;

    po[0] = 1;
    for(ll i = 1; i <= 1000000; i++) {
        // Precompute powers of 2 modulo MOD
        // po[i] = 2^i % MOD
        // Using the property that po[i] = (po[i-1] * 2) % MOD
        po[i] = 2 * po[i-1] % MOD;
    }
    while(t--) {
        solve();
    }
    return 0;
}