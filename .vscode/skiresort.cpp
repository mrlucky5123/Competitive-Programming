#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

// ll factorial(ll n) {
//     ll result = 1;
//     for(ll i = 2; i <= n; i++){
//         result *= i;
//     }
//     return result;
// }

void solve() {
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> trip(n);
    for(ll i = 0; i < n; i++) {
        cin >> trip[i];
        if(trip[i] > q) trip[i] = 0;
        else trip[i] = 1;
    }
    // for(auto it : trip) {
    //     cout << it << " ";
    // }
    // cout << endl;
    ll ans = 0, cnt = 0, current_length = 1;
    for(auto it : trip) {
        if(it == 1) {
            cnt++;
        } else {
            if(cnt >= k) {
                ll N = cnt - k + 1;
                ans += (N * (N + 1)) / 2;
            }
            cnt = 0; // before reset, we counted the no. of ways already.
        }
    }
    if(cnt >= k) {
        ll N = cnt - k + 1;
        ans += (N * (N + 1)) / 2;
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