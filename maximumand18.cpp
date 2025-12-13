#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    vector<pair<ll,ll>> contribution(31);
    for(ll i = 0; i <= 30; i++) {
        ll cnt = 0;
        for(ll j = 0; j < n; j++) {
            if(a[j] & (1LL << i)) {
                cnt++;
            }
        }
        contribution[i] = {(cnt * (1LL << i)), i};
    }
    sort(contribution.rbegin(), contribution.rend());
    ll ans = 0;
    for(ll i = 0; i < k; i++) {
        ll bit_to_set = contribution[i].second;
        ans = (ans | 1 << bit_to_set);
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