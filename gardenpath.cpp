#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    string s; cin >> s;
    ll n = s.size();
    ll q; cin >> q;
    vector<ll> pre(n+1,0);
    for(ll i = 2; i <= n; i++) {
        pre[i] = pre[i-1] + (s[i-1] == s[i-2] ? 1 : 0); 
    }
    while(q--) {
        ll l, r; cin >> l >> r;
        ll ans = pre[r] - pre[l];
        cout << ans << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}