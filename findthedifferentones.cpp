#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    vector<ll> p(n, -1);
    for(ll i = 1; i < n; i++) {
        p[i] = p[i-1];
        if(a[i] != a[i-1]) p[i] = i-1;
    }

    ll q; cin >> q;
    while(q--) {
        ll l, r; cin >> l >> r;
        l--, r--;
        if(p[r] < l) cout << -1 << " " << -1 << endl;
        else cout << p[r] + 1 << " " << p[r] + 2 << endl;
    }
    cout << endl;
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