#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n; 
//     vector<ll> a(n);
//     for(auto& i : a) cin >> i;

//     ll sum = accumulate(a.begin(), a.end(), 0LL);
//     ll cur_sum = 0;
//     for(ll i = 0; i < n; i++) {
//         if(a[i] > 0) {
//             cur_sum += a[i];
//         }
//         if(a[i] < 0) {
//             if(cur_sum >= sum) {
//                 cout << "NO" << endl;
//                 return;
//             } else {
//                 cur_sum = 0;
//             }
//         }
//         if(cur_sum >= sum) {
//             cout << "NO" << endl;
//             return;
//         }
//     }
//     cout << "YES" << endl;
// }

// void solve() {
//     ll n; cin >> n; 
//     vector<ll> a(n);
//     bool negative = false;
//     for(auto& i : a) {
//         cin >> i;
//         if(i < 0) negative = true;
//     }
//     if(!negative) {
//         cout << "YES" << endl;
//         return;
//     }
//     vector<ll> pre(n+1, 0);
//     for(ll i = 1; i <= n; i++) {
//         if(a[i-1] < 0) {
//             pre[i] = 0;
//         } else {
//             pre[i] = pre[i-1] + a[i-1];
//         }
//     }
//     // for(ll i = 1; i <= n; i++) {
//     //     cout << pre[i] << " ";
//     // }
    
//     ll sum = accumulate(a.begin(), a.end(), 0LL);
//     for(ll i = 1; i <= n; i++) {
//         if(pre[i] >= sum) {
//             cout << "NO" << endl;
//             return;
//         }
//     }
//     cout << "YES" << endl;
// }

// void solve() {
//     ll n; cin >> n; 
//     vector<ll> a(n);
//     bool negative = false;
//     ll sum = 0;
//     for(auto& i : a) {
//         cin >> i;
//         if(i < 0) negative = true;
//         sum += i;
//     }
//     if(!negative) {
//         cout << "YES" << endl;
//         return;
//     }
//     ll curr_sum = 0;
//     for(ll i = 0; i < n; i++) {
//         curr_sum += a[i];
//         if(curr_sum >= sum && i < n - 1) {
//             cout << "NO" << endl;
//             return;
//         }
//     }
//     cout << "YES" << endl;
// }

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;
    ll sum = accumulate(a.begin(), a.end(), 0LL);
    if(sum < 0) {
        cout << "NO" << endl;
        return;
    }
    ll pre_sum = 0;
    for(ll i = 0; i < n - 1; i++) {
        pre_sum += a[i];
        if(pre_sum >= sum) {
            cout << "NO" << endl;
            return;
        }
    }
    ll suff_sum = 0;
    for(ll i = n - 1; i > 0; i--) {
        suff_sum += a[i];
        if(suff_sum >= sum) {
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