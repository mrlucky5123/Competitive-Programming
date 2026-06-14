#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n, k; cin >> n >> k; 
//     vector<ll> a(n);
//     for(ll i = 0; i < n; i++) {
//         cin >> a[i];
//     }
    
//     //prefix sum
//     vector<ll> pre(n+1);
//     for(ll i = 1; i <= n; i++) {
//         pre[i] = a[i-1] + pre[i-1];
//     }

//     ll min_sum = LLONG_MAX, ans = -1;
//     for(ll i = 0; i <= n-k+1; i++) {
//         ll curr = pre[i+k-1] - pre[i-1];
//         if(curr < min_sum) {
//             min_sum = curr;
//             ans = i;
//         }
//     }
//     cout << ans << endl;
// }

void solve() {
    ll n, k; cin >> n >> k; 
    vector<ll> a(n+1);
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    //prefix sum
    vector<ll> pre(n+1);
    for(ll i = 1; i <= n; i++) {
        pre[i] = a[i] + pre[i-1];
    }

    ll min_sum = LLONG_MAX, ans = 1;
    for(ll i = 1; i <= n-k+1; i++) {
        ll curr = pre[i+k-1] - pre[i-1];
        if(curr < min_sum) {
            min_sum = curr;
            ans = i;
        }
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