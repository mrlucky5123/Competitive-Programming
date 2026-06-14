#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n, k; cin >> n >> k;
//     if(k > n) {
//         cout << 1 << endl;
//         return;
//     }

//     if(k == n) {
//         cout << 1 << endl;
//         return;
//     }

//     if(n&1 && k < n) {
//         cout << n << endl;
//         return;
//     } 
//     if(n%2 == 0 && k < n) {
//         while(n%k != 0) {
//             k--;
//         } 
//         cout << n/k << endl;
//     }
// }

void solve() {
    ll n, k; cin >> n >> k;

    if(k >= n) {
        cout << 1 << endl;
        return;
    }

    ll max_divisor = 1;
    for(ll i = 1; i * i <= n; i++){
        if(n%i == 0) {
            if(i <= k) max_divisor = max(max_divisor, i);
            if(n/i <= k) max_divisor = max(max_divisor, n/i);
        }
    }
    cout << n / max_divisor << endl;
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