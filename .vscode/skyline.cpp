#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n, k; cin >> n >> k;
//     vector<ll> a(n);
//     for(auto& i : a) cin >> i;

//     ll curr_sum = 0;
//     for(ll i = 0; i < k; i++) {
//         curr_sum += a[i];
//     }
//     ll min_sum = curr_sum;
//     ll best_start = 0;

//     for(ll i = k; i < n; i++) {
//         curr_sum = curr_sum - a[i-k] + a[i];
//         if(curr_sum < min_sum) {
//             min_sum = curr_sum;
//             best_start = i - k + 1;
//         }
//     }
//     cout << best_start + 1 << endl;
// }
void solve() {
    ll n, k; cin >> n >> k;
    // vector<ll> a(n+1);
    // for(ll i = 1; i <= n; i++) cin >> a[i];

    vector<ll> pre(n+1, 0);
    // for(ll i = 1; i <= n; i++) {
    //     pre[i] = pre[i-1] + a[i];
    // }
    for(ll i = 1; i <= n; i++) {
        ll h;
        cin >> h;
        pre[i] = pre[i-1] + h;
    }
    ll min_sum = LLONG_MAX;
    ll best_start = 1;

    for(ll start = 1; start <= n - k + 1; start++) {
        ll end = start + k - 1;
        ll curr_sum = pre[end] - pre[start - 1];
        if(curr_sum < min_sum) {
            min_sum = curr_sum;
            best_start = start;
        }
    }
    cout << best_start << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}