#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// bool is_tprime(ll x) {
//     set<ll> divisors;
//     divisors.insert(1);
//     divisors.insert(x);
//     for(ll i = 2; i < x; i++) {
//         if(x % i == 0) {
//             divisors.insert(i);
//         } else {
//             continue;
//         }
//     }
//     return divisors.size() == 3;
// }

// void solve() {
//     ll n; cin >> n; 
//     vector<ll> a(n);
//     for(auto& i : a) cin >> i;

//     for(auto& x : a) {
//         ll sqrt_x = sqrt(x);
//         if(is_prime(sqrt_x) && sqrt_x * sqrt_x == x)  {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//         if(is_tprime(x)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
// }

const ll maxN = 1e6 + 5;
vector<bool> is_prime(maxN, true);

void sieve() {
    is_prime[0] = is_prime[1] = false; // since smallest prime is 2 
    for(ll i = 2; i * i < maxN; i++) {
        if(is_prime[i]) {
            for(ll j = i*i; j < maxN; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

bool is_tprime(ll x) {
    if(x < 4) return false; // smallest t prime is 4 (2*2)
    ll root = sqrt(x);
    if(root * root != x) return false; // not a perfect square

    return is_prime[root];
}

void solve() {
    sieve();
    ll n; cin >> n; 
    vector<ll> a(n);
    for(auto& i : a) cin >> i;
    for(auto& x : a) {
        cout << (is_tprime(x) ? "YES" : "NO") << endl;
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