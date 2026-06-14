#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n, m; cin >> n >> m;

//     vector<ll> a(n);
//     for(auto& i : a) cin >> i;

//     vector<ll> rem(m);
//     for(ll i = 0; i < m; i++) {
//         rem[a[i] % m]++;
//     } 

//     ll ans = 0;
//     for(ll i = 0; i < m; i++) {
//         ll x = rem[i], y = rem[(m - i) % m];
//         if((x == 0) && (y == 0)) continue;

//         ll temp = min(x, y);

//         x -= min(temp+1, x);
//         y -= min(temp+1, y);

//         ans++;

//         ans += (x+y);

//         rem[i] = 0;
//         rem[(m - i) % m] = 0;
//     }
//     cout << ans << endl;
// }

void solve() {
    ll n, m; cin >> n >> m;

    vector<ll> cnt(m, 0);
    for(ll i = 0; i < n; i++) {
        ll x; cin >> x;
        cnt[x%m]++;
    }
    ll ans = 0;
    if(cnt[0] > 0) ans++;

    for(ll i = 1; i <= (m-1)/2; i++) {
        ll x = cnt[i], y = cnt[m-i];

        if(x == 0 && y == 0) continue;

        ans++;
        if(x != y) ans += max(0LL, abs(x-y)-1);
    }
    if(m % 2 == 0 && cnt[m/2] > 0) ans++;
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