#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n;
//     vector<ll> a(n+1);
//     for(ll i = 1; i <= n; i++) cin >> a[i];
//     sort(a.begin(), a.end());

//     for(ll i = 1; i < n; i++) {
//         if(i % 2 == 1) {
//             if(a[i+1] > a[i]) continue;
//             else swap(a[i], a[i+1]);
//         } else {
//             if(a[i+1] > a[i]) swap(a[i], a[i+1]);
//             else continue;
//         }
//     }
//     is_sorted(a.begin()+1, a.end()) ? cout << "YES" << endl : cout << "NO" << endl;
// }

void solve() {
    ll n; cin >> n;
    vector<ll> a(n+1);
    for(ll i = 1; i <= n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    for(ll i = 2; i < n; i += 2) {
        if(a[i] != a[i+1]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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