#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// vector<ll> spf(100005, 0);

// void buildspf() {
//     for(ll i = 1; i <= 100001; i++) {
//         spf[i] = i;
//     }
//     for(ll i = 2; i*i <= 100001; i++) {
//         if(spf[i] == i) {
//             for(ll j = i*i; j <= 100001; j += i) {
//                 if(spf[j] == j) {
//                     spf[j] = i;
//                 }
//             }
//         }
//     }
// }

// void solve() {
//     ll n; cin >> n;

//     if(n <= 2) {
//         cout << 1 << endl;
//     } else {
//         cout << 2 << endl;
//     }

//     for(ll i = 2; i <= n+1; i++) {
//         if(spf[i] == i) {
//             cout << 1 << " ";
//         } else {
//             cout << 2 << " ";
//         }
//     }
//     cout << endl;
// }

vector<bool> isprime(100005, true);

void buildsieve() {
    isprime[0] = isprime[1] = false;

    for(ll i = 2; i*i <= 100001; i++) {
        if(isprime[i]) {
            for(ll j= i*i; j <= 100001; j+=i) {
                isprime[j] = false;
            }
        }
    }
}

void solve() {
    ll n; cin >> n; 
    if(n <= 2)cout << 1 << endl;
    else cout << 2 << endl;

    for(ll i = 2; i <= n+1; i++) {
        if(isprime[i]) {
            cout << 1 << " ";
        } else cout << 2 << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // buildspf();
    buildsieve();
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}