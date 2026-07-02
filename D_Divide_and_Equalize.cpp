#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n;
//     vector<pair<ll,ll>> freq_prime;
//     for(ll i = 0; i < n; i++) {
//         ll x; cin >> x;
//         for(ll j = 2; j * j <= x; j++) {
//             if(j%2 == 0) {
//                 ll cnt = 0;
//                 while(j%2 == 0) {
//                     cnt++;
//                     x /= j;
//                 }
//                 freq_prime.push_back({x, cnt});
//             }
//         }
//     }

//     for(auto& it : freq_prime) {
//         if(it.second % n != 0) {
//             cout << "NO" << endl;
//             return;
//         }
//     }
//     cout << "YES" << endl;
// }

void solve() {
    ll n; cin >> n;
    unordered_map<ll, ll> freq;

    for(ll i = 0; i < n; i++) {
        ll x; cin >> x;
        for(ll p = 2; p * p <= x; p++) {
            while(x%p==0) {
                freq[p]++;
                x /= p;
            } 
        }
        if(x > 1) freq[x]++;
    }
    for(auto &it : freq) {
        ll prime = it.first;
        ll cnt = it.second;
        if(cnt % n != 0) {
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