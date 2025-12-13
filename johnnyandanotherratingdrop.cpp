#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// Brute Force approach O(n);

// but we need O(logn)

// // void solve() {
// //     ll n; cin >> n; 
// //     vector<ll> a(n);
// //     for(ll i = 0; i <= n; i++) {
// //         a[i] = i;
// //     }

// //     ll i = 0, j = i + 1, sum = 0;
// //     while(i < n) {
// //         ll ele1 = a[i];
// //         ll ele2 = a[j];
// //         for(ll k = 0; k <= 60; k++) {
// //             if(a[i]&a[j] == 0) {
// //                 sum++;
// //             }
// //         }
// //         i++;
// //     }
// //     cout << sum << endl;
// // }

// ll countDifferentBits(ll x, ll y) {
//     ll diff = x ^ y;
//     ll count = 0;
//     while(diff > 0) {
//         count += (diff & 1);
//         diff >>= 1;
//     }
//     return count;
// }

// void solve() {
//     ll n; cin >> n;

//     ll sum = 0;
//     for(ll i = 0; i < n; i++) {
//         sum += countDifferentBits(i, i+1);
//     }
//     cout << sum << endl;
// }


void solve() {
    ll n; cin >> n;
    ll ans = 0;

    for(ll i = 0; (1LL << i) <= n; i++) {
        ans += n / (1LL << i);
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

