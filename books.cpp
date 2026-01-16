#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// Sliding Window Approach
// void solve() {
//     ll n, t; cin >> n >> t;
//     vector<ll> a(n);
//     for(auto& i : a) cin >> i;

//     ll left = 0, right = 0;
//     ll curr_sum = 0;
//     ll ans = 0;

//     while(right < n) {
//         curr_sum += a[right];

//         while(curr_sum > t && left <= right) {
//             curr_sum -= a[left];
//             left++;
//         }

//         ans = max(ans, right - left + 1);
//         right++;
//     }
//     cout << ans << endl;
// }



// prefix sum + binary search
void solve() {
    ll n, t; cin >> n >> t;
    vector<ll> a(n+1, 0);
    for(ll i = 1; i <= n; i++) cin >> a[i];

    vector<ll> pre(n+1, 0);
    for(ll i = 1; i <= n; i++) {
        pre[i] = a[i]+pre[i-1];
    }

    ll ans = 0;

    for(ll i = 1; i <= n; i++) {
        ll low = i, high = n, best = i - 1;

        while(low <= high) {
            ll mid = low + (high - low + 1) / 2;

            ll sum = pre[mid] - pre[i-1];

            if(sum <= t) {
                best = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        ans = max(ans, best - i + 1);
    }
    cout << ans << endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}