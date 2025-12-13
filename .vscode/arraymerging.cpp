#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> a(n), b(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];

    // Arrays to store longest runs for each value
    vector<ll> longest_sub_arr_a(2*n + 1, 0);
    vector<ll> longest_sub_arr_b(2*n + 1, 0);

    // Compute longest runs in a
    ll counter = 1;
    for(ll i = 1; i < n; i++) {
        if(a[i] == a[i-1]) {
            counter++;
        } else {
            longest_sub_arr_a[a[i-1]] = max(longest_sub_arr_a[a[i-1]], counter);
            counter = 1;
        }
    }
    longest_sub_arr_a[a[n-1]] = max(longest_sub_arr_a[a[n-1]], counter);

    // Compute longest runs in b
    counter = 1;
    for(ll i = 1; i < n; i++) {
        if(b[i] == b[i-1]) {
            counter++;
        } else {
            longest_sub_arr_b[b[i-1]] = max(longest_sub_arr_b[b[i-1]], counter);
            counter = 1;
        }
    }
    longest_sub_arr_b[b[n-1]] = max(longest_sub_arr_b[b[n-1]], counter);

    // Find maximum possible run
    ll max_freq = 0; // Initialize to 0 since runs are non-negative
    for(ll i = 1; i <= 2*n; i++) {
        max_freq = max(max_freq, longest_sub_arr_a[i] + longest_sub_arr_b[i]);
    }

    cout << max_freq << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}