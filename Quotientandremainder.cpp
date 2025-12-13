#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> q(n), r(n);
    for(auto& i : q) cin >> i;
    for(auto& i : r) cin >> i;

    sort(q.rbegin(), q.rend());
    sort(r.begin(), r.end());

    ll p1 = 0;
    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        if(p1 == n) break;
        if((r[p1] + 1)* q[i] + r[p1] <= k) {
            ans++;
            p1++;
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