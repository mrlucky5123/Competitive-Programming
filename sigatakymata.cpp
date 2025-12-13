#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n;
//     vector<ll> a(n+1);
//     for(ll i = 1; i <= n; i++) cin >> a[i];
//     string x; cin >> x;
    
//     ll min_idx = -1, max_idx = -1, min_ele = LLONG_MAX, max_ele = LLONG_MIN;
//     for(ll i = 1; i <= n; i++) {
//         if(x[i] < min_ele) {
//             min_ele = x[i];
//             min_idx = i;
//         }
//         if(x[i] > max_ele) {
//             max_ele = x[i];
//             max_idx = i;
//         }
//     }
//     if(x[min_idx] == '1' || x[max_idx] == '1' || x[0] == '1' || x[n-1] == '1') {
//         cout << -1 << endl;
//         return;
//     }
//     cout << 5 << endl;
//     cout << min_idx << " " << max_idx << endl;
//     cout << 1 << " " << min_idx << endl;
//     cout << 1 << " " << max_idx << endl;
//     cout << min_idx << " " << n << endl;
//     cout << max_idx << " " << n << endl;
// }

void solve() {
    ll n; cin >> n;
    vector<ll> p(n);
    for(auto& i : p) cin >> i;
    string s; cin >> s;

    ll a = 0, b = 0;
    while(p[a] != 1) a++;
    while(p[b] != n) b++;

    if(s[0] == '1' || s[n-1] == '1' || s[a] == '1' || s[b] == '1') {
        cout << -1 << endl;
        return;
    }

    a++; b++;
    vector<pair<ll,ll>> ans = {
        {1, a}, {1,b}, {a,n}, {b,n}, {min(a,b), max(a,b)}
    };
    cout << 5 << endl;
    for(auto& [x, y] : ans) cout << x << " " << y << endl;
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