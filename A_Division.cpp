#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll p, q; cin >> p >> q;
    vector<ll> primes;
    ll nq = q;
    //code of trial division to get all the prime factors 
    for(ll i = 2; i * i <= q; i++) {
        if(nq%i==0) {
            primes.push_back(i);
            while (nq % i == 0) {
                nq /= i;
            }
            
        }
    }
    if(nq > 1) primes.push_back(nq);

    ll ans = p;

    for(auto prime : primes) { //10   10^3
        ll a = 0, b = 0;
        ll nq = q, np = p;
        while(np % prime == 0) { // 64
            a++;
            np /= prime;
        }
        while(nq % prime == 0) { // 32
            b++;
            nq /= prime;
        }
        ll drop = a-b+1; // 6->3 6-3+1
        ll val = 1;
        for(ll i = 0; i < drop; i++) { // 60's
            val *= prime;
        }
        ans = min(ans, val);
    }
    cout << (p/ans) << endl;
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