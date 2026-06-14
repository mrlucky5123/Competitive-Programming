#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n;
//     vector<ll> a(n+1);
    
//     for(ll i = 1; i <= n; i++) {
//         cin >> a[i];
//     }
//     sort(a.begin(), a.end());
//     ll max_diff = a[n]-a[1];
//     ll ans = 0;

//     map<ll, ll> freq;
//     for(ll i = 1; i < n; i++) {
//         for(ll j = i + 1; j <= n; j++) {
//             if(abs(a[j] - a[i]) == max_diff) {
//                 freq[abs(a[j] - a[i])]++;
//             }
//         }
//     }
//     for(ll i = n; i > 1; i--) {
//         for(ll j = n-1; j >= 1; j--) {
//             if(abs(a[j] - a[i]) == max_diff) {
//                 freq[abs(a[j] - a[i])]++;
//             }
//         }
//     }
//     cout << freq[max_diff] << endl;
// }

void solve() {
    ll n; cin >> n;
    vector<ll> a(n); 
    for(auto& i : a) cin >> i;
    sort(a.begin(), a.end()); 

    // all same
    if(a[0] == a[n-1]) {
        cout << n * (n-1) << endl;
        return;
    }

    ll min_cnt = 1; 
    for(ll i = 1; i < n && a[i] == a[0]; i++) min_cnt++;

    ll max_cnt = 1; 
    for(ll i = n-2; i >= 0 && a[i] == a[n-1]; i--) max_cnt++;

    cout << 2 * min_cnt * max_cnt << endl;
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