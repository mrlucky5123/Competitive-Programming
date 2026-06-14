#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// const ll maxN = 1e9+5;
// ll spf[maxN];
// vector<bool> isprime(n, true);

// void sieve() {
//     isprime[0]=isprime[1] = false;

//     for(ll i = 2; i*i <= maxN; i++) {
//         if(isprime[i]) {
//             for(ll j = i*i; j <= maxN; j+=i) {
//                 if(isprime[j]) {
//                     isprime[j] = false;
//                 }
//             }
//         }
//     }
// }

// void buildspf() {
//     for(ll i = 2; i <= maxN; i++) {
//         spf[i] = i;
//     }
//     for(ll i = 2; i*i <= maxN; i++) {
//         if(spf[i] == i) {
//             for(ll j = i*i; j < maxN; j+=i) {
//                 if(spf[j] == j) spf[j] = i;
//             }
//         }
//     }
// }


void solve() {
    ll n; cin >> n; 
    if(!(n&1)){
        cout << n/2 << " " << n/2 << endl;
        return;
    }

    ll spf = -1;
    for(ll i = 3; i*i <= n; i+=2) { // since n even will be handled before only
        if(n % i == 0) {
            spf = i;
            break;
        }
    }

    if(spf == -1) {
        cout << 1 << " " << n - 1 << endl;
    }else {
        ll a = n / spf;
        ll b = n - a;
        cout << a << " " << b << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // sieve();
    // buildspf();
    long long t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}