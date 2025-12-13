#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    vector<ll> prefix_xor(n, 0);
    prefix_xor[0] = a[0];
    for(ll i = 1; i < n; i++) {
        prefix_xor[i] = prefix_xor[i-1] ^ a[i];
    }
    ll q; cin >> q;
    while(q--) {
        ll l, r; cin >> l >> r;
        l--; r--;
        // ll result = prefix_xor[r] ^ (l == 0 ? 0 : prefix_xor[l-1]);
        // cout << result << endl;
        cout << (prefix_xor[r] ^ (l == 0 ? 0 : prefix_xor[l-1])) << endl;
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