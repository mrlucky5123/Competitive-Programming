#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n; 
//     vector<ll> a(n);
//     ll total_ones = 0;
//     for(auto &i : a) {
//         cin >> i;
//         if(i == 1) total_ones++;
//     }
//     ll max_gains = 0;

//     for(ll i = 0; i < n; i++) {
//         ll zeroes = 0, ones = 0;
//         for(ll j = i; j < n; j++) {
//             if(a[j] == 0) zeroes++;
//             else ones++;

//             ll gain = zeroes - ones;
//             max_gains = max(max_gains, gain);
//         }
//     }

//     if(total_ones == n) {
//         cout << n - 1 << endl;
//     } else {
//         cout << total_ones + max_gains << endl;
//     }
// }

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    ll total_ones = 0;
    for(auto &i : a) {
        cin >> i;
        if(i == 1) total_ones++;
    }

    ll max_gain = 0;

    ll gain = 0;
    for(ll i = 0; i < n; i++) {
        ll point = (a[i] == 0) ? 1 : -1;
        
        gain = max(point, gain + point);
        max_gain = max(max_gain, gain);
    }

    if(total_ones == n) {
        cout << n - 1 << endl;
    } else {
        cout << total_ones + max_gain << endl;
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