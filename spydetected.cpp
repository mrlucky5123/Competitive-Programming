#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

// void solve() {
//     ll n;
//     cin >> n;
//     vector<ll> a(n+1, 0);
//     for(ll i = 1; i <= n; i++) cin >> a[i];

//     vector<ll> freq(n+1, 0);
//     for(ll i = 1; i <= n; i++) {
//         freq[a[i]]++;
//     }

//     ll ans_idx = -1;
//     for(ll i = 1; i <= n; i++) {
//         if(freq[a[i]] == 1) {
//             ans_idx = i;
//             break;
//         }
//     }
//     cout << ans_idx << endl;
// }

// void solve() {
//     ll n;
//     cin >> n;
//     vector<pair<ll, ll>> a(n);
//     for (ll i = 0; i < n; i++) {
//         cin >> a[i].first;
//         a[i].second = i + 1; // Store 1-based index
//     }

//     // Sort by element value
//     sort(a.begin(), a.end());

//     ll ans_idx = -1;
//     if (n == 1) {
//         ans_idx = 1; // Single element is unique
//     } else {
//         // Check first element
//         if (a[0].first != a[1].first) {
//             ans_idx = a[0].second;
//         }
//         // Check middle elements
//         for (ll i = 1; i < n - 1; i++) {
//             if (a[i].first != a[i - 1].first && a[i].first != a[i + 1].first) {
//                 ans_idx = a[i].second;
//                 break;
//             }
//         }
//         // Check last element
//         if (a[n - 1].first != a[n - 2].first) {
//             ans_idx = a[n - 1].second;
//         }
//     }
//     cout << ans_idx << endl;
// }
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n+1, 0);
    for(ll i = 1; i <= n; i++) cin >> a[i];

    map<ll, ll> freq;
    for(ll i = 1; i <= n; i++) freq[a[i]]++;

    ll ans_idx = -1;
    for(ll i = 1; i <= n; i++) {
        if(freq[a[i]] == 1) {
            ans_idx = i;
            break;
        }
    }
    cout << ans_idx << endl;
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