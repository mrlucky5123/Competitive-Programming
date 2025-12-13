#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

// bool x_found(ll y, ll k, ll x) {
//     ll curr = y;
//     for(ll i = 0; i < k; i++) {
//         if(curr == x) return false; //early 
//         if(curr % 2 == 0) {
//             curr /= 2;
//         } else {
//             curr = 3 * curr + 1;
//         }
//     }
//     return curr == x; // true if found after exactly k steps
// }

// void solve() {
//     ll k, x; cin >> k >> x;
//     for(ll y = 1; y <= 1000; y++) {
//         if(x_found(y, k, x)) {
//             cout << y << endl;
//             return;
//         }
//     }
// }

// ll result(ll k, ll x) {
//     if(k == 0) return x;

//     ll choice1 = result(k-1, 2*x);

//     if((x - 1) % 3 == 0 && x > 1) {
//         ll prev = (x-1) / 3;
//         if(prev % 2 == 1) {
//             ll choice2 = result(k-1, prev);
//             return choice2;
//         }
//     }
//     return choice1;
// }
void solve() {
    ll k, x; cin >> k >> x;
    cout << x * (1LL << k) << endl;
    // cout << result(k, x) << endl;
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