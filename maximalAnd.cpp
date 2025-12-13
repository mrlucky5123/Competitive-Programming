#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n, k; cin >> n >> k;
//     vector<ll> a(n);
//     for(ll i = 0; i < n; i++) cin >> a[i];
//     sort(a.begin(), a.end());

//     for(ll i = 0; i < k; i++) {
//         a[i] |= (1 << 30);
//     }
//     ll ans = *min_element(a.begin(), a.end()); 
//     for(ll i = 0; i < n; i++) {
//         ans &= a[i];
//     }
//     cout << ans << endl;
// }

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    vector<ll> cnt(31, 0);
    ll ans = 0;
    for(ll i = 30; i >= 0; i--) {
        ll temp = 0;
        for(ll j = 0; j < n; j++) {
            if((a[j]&(1<<i)) > 0) {
                temp++;
            }
        }
        cnt[i] = n - temp;
    }
    for(ll i = 30; i >= 0; i--) {
        if(cnt[i] <= k) {
            k -= cnt[i];
            ans |= (1 << i);
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