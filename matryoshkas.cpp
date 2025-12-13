#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;

    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    map<ll, ll> cnt;
    for(ll i = 0; i < n; i++) cnt[a[i]]++;

    ll ans = 0;
    for(auto it = cnt.begin(); it != cnt.end(); it++) {
        ll ele = it->first;
        ll fre = it->second;
        ans += max(0LL, cnt[ele] - cnt[ele - 1]);
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