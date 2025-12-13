#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n;
//     if(n == 1) {
//         cout << 1 << endl;
//         return;
//     }
//     if(n == 2) {
//         cout << -1 << endl;
//         return;
//     }

//     vector<vector<ll>> matrix(n, vector<ll> (n));
//     ll odd = 1, even = 2;

//     for(ll i = 0; i < n; i++) {
//         for(ll j = 0; j < n; j++) {
//             if(odd <= n*n) {
//                 matrix[i][j] = odd;
//                 odd += 2;
//             } else {
//                 matrix[i][j] = even;
//                 even += 2;
//             }
//         }
//     }

//     for(ll i = 0; i < n; i++) {
//         for(ll j = 0; j < n; i++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

void solve() {
    ll n; cin >> n; 
    if(n == 1) {
        cout << 1 << endl;
        return;
    }
    if(n == 2) {
        cout << -1 << endl;
        return;
    }

    vector<vector<ll>> matrix(n, vector<ll>(n));

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            
        }
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