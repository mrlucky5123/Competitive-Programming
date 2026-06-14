#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n; 
//     vector<pair<ll,ll>> a(n+1);
//     for(ll i = 1; i <= n; i++) {
//         cin >> a[i].second;
//         a[i].first = i;
//     }
    // ll count = 0;
    // forl(ll i = 0; i < n; i++) {
    //     if(a[i].first == a[i].second) {
    //         count++;
    //     }
    // }
    // cout << count * (count - 1) / 2 << endl;

//     ll ans = 0;
//     for(ll i = 0; i < n - 1; i++) {
//         for(ll j = i + 1; j < n; j++) {
//             if(a[j].first - a[i].first == a[j].second - a[i].second) {
//                 ans++;
//             }
//         }
//     }
//     cout << ans << endl;
// }

// void solve() {
//     ll n; cin >> n; 
//     vector<pair<ll,ll>> a(n+1);
//     map<ll, ll> freq;
//     for(ll i = 1; i <= n; i++) {
//         cin >> a[i].second;
//         a[i].first = i;
//         freq[a[i].second - a[i].first]++;
//     }
//         ll ans = 0;
//         for(auto it : freq) {
//             ans += (it.second * (it.second-1)) / 2;
//         }
//         cout << ans << endl;
// }

void solve() {
    ll n; cin >> n; 
    map<ll, ll> freq;
    for(ll i = 1; i <= n; i++) {
        ll x; cin >> x;
        freq[x-i]++;
    }
    ll ans = 0;
    for(auto it : freq) {
        ans += (it.second * (it.second - 1))/2;
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