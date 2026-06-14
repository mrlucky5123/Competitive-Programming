#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n, k; cin >> n >> k;
//     vector<ll> a(n+1);
//     for(ll i = 1; i <= n; i++)  cin >> a[i];

//     ll p; cin >> p;
//     ll ans = 0;
//     for(int i = 0; i < n; i++) {
//         if(a[i] != p && (i == 0 || a[i-1] == p)) {
//             ans++;
//         }
//     }
//     cout << ans << endl;
// }

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    ll p; cin >> p;
    ll x = a[p-1];

    ll left = 0; 
    if((a[0]^x)) left++;

    for(ll i = 1; i < p; i++) {
        if((a[i]^x) != (a[i-1]^x)) {
            left++;
        }
    }
    
    ll right = 0;
    for(ll i = p-1; i < n-1; i++) {
        if((a[i]^x) != (a[i+1]^x)) {
            right++;
        }
    }
    if((a[n-1]^x)) right++;

    cout << max(left, right) << endl;
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