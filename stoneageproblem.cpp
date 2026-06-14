#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n, q; cin >> n >> q;
//     vector<ll> a(n);
//     ll sum = 0;
//     for(auto& i : a) {
//         cin >> i;
//         sum += i;
//     }

//     while(q--) {
//         ll type; cin >> type;
//         if(type == 1) {
//             ll idx, val; cin >> idx >> val;
//             idx--;
//             sum = sum - a[idx] + val;
//             a[idx] = val;
//             cout << sum << endl;
//         } else {
//             ll val; cin >> val;
//             for(ll i = 0; i < n; i++) {
//                 a[i] = val;
//             }
//             sum = val * n;
//             cout << val*n << endl;
//         }
//     }
// }

void solve() {
    ll n, q; cin >> n >> q;
    vector<ll> a(n);
    vector<ll> lastupdate(n, 0);
    ll sum = 0;

    for(auto& i : a) {
        cin >> i;
        sum += i;
    }
    
    ll globalVal = 0;
    ll globalVersion = 0;
    ll currVersion = 0;

    while(q--) {
        ll type; cin >> type;
        currVersion++;
        
        if(type == 1) {
            ll idx, val; cin >> idx >> val;
            idx--;

            ll currVal;
            if(lastupdate[idx] < globalVersion) {
                currVal = globalVal;
            } else {
                currVal = a[idx];
            }

            sum = sum - currVal + val;
            a[idx] = val;
            lastupdate[idx] = currVersion;
            cout << sum << endl;
        } else {
            ll val; cin >> val;

            globalVal = val;
            globalVersion = currVersion;
            sum = val * n;
            cout << sum << endl;
        }

    }
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