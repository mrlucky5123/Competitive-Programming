#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// for each test case:
//     map cnt

//     for each a[i]:
//         rem = a[i] % k
//         if rem != 0:
//             need = k - rem
//             cnt[need]++

//     if cnt empty:
//         print 0
//     else:
//         ans = 0
//         for each need:
//             x = need + (cnt[need]-1)*k
//             ans = max(ans, x+1)

//         print ans


void solve() {
    ll n, k; cin >> n >> k;
    map<ll, ll> cnt;
    for(ll i = 0; i < n; i++) {
        ll a; cin >> a;
        ll rem = a % k;
        if(rem != 0) {
            ll need = k - rem;
            cnt[need]++;
        }
    }
    if(cnt.empty()) {
        cout << 0 << endl;
    } else {
        ll ans = 0;
        for(auto& p : cnt) {
            ll need = p.first;
            ll freq = p.second;
            ll x = need + (freq - 1) * k;
            ans = max(ans, x + 1);
        }
        cout << ans << endl;
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