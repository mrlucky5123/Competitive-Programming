#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n;
//     vector<ll> a(n+1);
//     for(ll i = 1; i <= n; i++) cin >> a[i];

//     ll count = 0;
//     // for(ll i = 1; i < n; i++) {
//     //     for(ll j = i+1; j <= n; j++) {
//     //         if(i+j == a[i]*a[j]) count++;
//     //         else continue;
//     //     }
//     // }

//     for(ll i = 1; i <= n; i++) {
//         ll x = a[i];
//         for(ll y = 1; x*y <= 2*n; y++) {
//             ll j = x*y - i;
//             if(j > i && j <= n && a[j] == y) count++;
//         }
//     }
//     cout << count << endl;
// }

void solve() {
    ll n; cin >> n; 
    vector<pair<ll,ll>> a(n);
    for(ll i = 0; i < n; i++) {
        ll x; cin >> x;
        a[i] = {x, i+1};

        // cin >> a[i].first;
        // a[i].second = i+1;
    }

    sort(a.begin(), a.end());   

    ll ans = 0;

    // for(ll i = 0; i < n; i++) {
    //     for(ll j = i + 1; j < n; j++) {
    //         if(a[i].first*a[j].first >= 2*n) break;
    //         if(a[i].first*a[j].first == a[i].second + a[j].second) {
    //             ans++;
    //         }
    //     }
    // }
    for(ll i = 0; i < n; i++) {
        for(ll j = i + 1; j < n && a[i].first*a[j].first < 2*n; j++) {
            if(a[i].first*a[j].first == a[i].second + a[j].second) {
                ans++;
            }
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