#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n, k; cin >> n >> k;
//     vector<ll> a(n);
//     for(ll i = 0; i < n; i++) cin >> a[i];
//     ll sum = accumulate(a.begin(), a.end(), 0LL);

//     if(sum < k) {
//         cout << -1 << endl;
//         return;
//     }
//     if(sum == k) {
//         cout << 0 << endl;
//         return;
//     }

//     ll left = 0, right = n - 1;
//     ll curr_sum = sum, ans = 0;
//     while(curr_sum != k) {
//         if(a[left] == 1 && a[right] == 1 && curr_sum-k >= 2) {
//             ans += 2;
//             left++;
//             right--;
//             curr_sum -= 2;
            
//         }
//         ll temp_left = left, temp_right = right;
//         ll cnt_left = 0, cnt_right = 0;
//         while(a[temp_left] != 1) {
//             cnt_left++;
//             temp_left++;
//         }
//         while(a[temp_right] != 1) {
//             cnt_right++;
//             temp_right--;
//         }

//         if(cnt_left <= cnt_right) {
//             ans++;
//             left++;
//             curr_sum--;
//         }else {
//             ans++;
//             right--;
//             curr_sum--;
//         }
//         // if(a[left] == 1 && a[right] == 0) {
//         //     ans++;
//         //     left++;
//         //     curr_sum--;
//         // }
//         // if(a[right] == 1 && a[left] == 0) {
//         //     ans++;
//         //     right--;
//         //     curr_sum--;
//         // }
//         left++;
//         right--;
//     }
//     cout << ans << endl;
// }

void solve() {
    ll n, s; cin >> n >> s;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i]; // O(n)

    ll len = -1; // maximum length of a subarray with sum = s;

    map<ll,ll> mp;
    mp[0] = -1;
    //mp[0] = 1;

    ll sum = 0;
    for(ll i = 0; i < n; i++) {
        sum += a[i];
        if(mp.count(sum - s)) {
            len = max(len, i - mp[sum - s]);
        }
        if(!mp.count(sum)) {
            mp[sum] = i;
        }
    }
    if(len == -1) {
        cout << -1 << endl;
    } else {
        cout << n - len << endl;
    }

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