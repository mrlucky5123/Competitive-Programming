#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// Pattern Locked In
// ```
// For "find maximum pairs with property X":
// 1. Generate all candidate values of X
// 2. For each X → two pointer count
// 3. Track maximum
// ```

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    set<ll> distinct_sums;

    for(auto& i : a) cin >> i;
    sort(a.begin(), a.end());

    // distinct sums for the given array
    for(ll i = 0; i < n-1; i++) {
        for(ll j = i+1; j < n; j++) {
            ll sum = a[j] + a[i];
            distinct_sums.insert(sum);
        }
    }

    // for each s, count the possible pairs of sum s
    ll k = distinct_sums.size();
    // ll ans = 1; 
    // for(ll i = 0; i < k; i++) {
    //     ll key = distinct_sums[i];
    //     ll left = 0, right = n-1;
    //     ll count = 1;
    //     while(left < right) {
    //         if(a[left]+a[right] == key)count++;
    //         left++;
    //         right--;
    //     }
    //     ans = max(count, ans);
    // }
    // cout << ans << endl;
    ll ans = 0;
    for(auto key : distinct_sums) {
        ll left = 0, right = n - 1;
        ll count = 0;
        while(left < right) {
            ll curr = a[left]+a[right];
            if(curr == key) {
                count++;
                left++;
                right--;
            } else if(curr < key)left++;
            else right--;
        }
        ans = max(count, ans);
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