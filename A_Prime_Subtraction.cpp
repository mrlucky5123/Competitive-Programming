#include<bits/stdc++.h>
#define ll long long int
const ll mod = 1e9+7;
#define endl '\n'
using namespace std;

// void solve() {
//     ll x, y; cin >> x >> y;
//     ll num = (x%mod-y%mod+mod)%mod;

//     for(ll i = 2; i * i <= num; i++) {
//         if(num%i==0) {
//             cout << "YES" << endl;
//             return;
//         }
//     }
//     cout << "NO" << endl;
// }

void solve() {
    ll x, y; cin >> x >> y;
    ll num = x-y;
    if(num > 1) cout << "YES" << endl;
    else cout << "NO" << endl;
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