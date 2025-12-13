#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n; 
//     vector<ll> a(n);
//     for(ll i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     bool allsame = true; 
//     for(ll i = 1; i < n; i++) {
//         if(a[i] != a[i-1]) allsame = false;
//     }
//     if(allsame) {
//         cout << 1 << endl;
//         return;
//     }

//     sort(a.rbegin(), a.rend());

//     ll l = 1, r = -1;
//     for(ll i = 0; i < n; i++) {
//         if(a[i] == 0) {
//             r = i;
//             break;
//         }
//     }
//     if(r == -1) {
//         cout << n - l + 1 << endl;
//     } else {
//         cout << r - l + 1 << endl;
//     }
// }

// void solve() {
//     ll n; cin >> n;
//     vector<ll> a(n);
//     for(auto& i : a) cin >> i;

//     ll cnt = 0;
//     for(auto& i : a) {
//         if(i == 0) cnt++;
//     }
//     ll non_zero = n - cnt;

//     sort(a.rbegin(), a.rend());

//     ll cnt_ele = 0; 
//     while(n > 0) {
//         ll i = 0;
//         n -= a[i];
//         i++;
//         cnt_ele++;
//     }
//     cout << non_zero - cnt_ele << endl;
// }

// void solve() {
//     ll n; cin >> n; 
//     vector<ll> b(n);
//     for(auto& i : b) cin >> i;

//     ll max_val = *max_element(b.begin(), b.end());
//     ll positive_cnt = 0;
//     for(auto i : b) {
//         if(i > 0) positive_cnt++;
//     }
//     cout << min(max_val, positive_cnt) << endl;
// }

void solve() {
    ll n; cin >> n; 
    // vector<ll> b(n);
    ll zero_cnt = 0; 
    ll sum = 0;
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if(x == 0) zero_cnt++;
        sum += x;
    }
    cout << min(n - zero_cnt, sum - n + 1) << endl;
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