// Almost Prime Numbers :- 
// A number is called almost prime if if has exaclty two distinct prime divisors. Given a number n, find the count of almost prime numbers between 1 and n (inclusive).


#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// const ll N = 3000+5;

// bool almost_prime(ll n) {
//     set<ll> divisors;
//     if(n % 2 == 0) {
//         divisors.insert(2);
//         while(n % 2 == 0) n /= 2;
//     }
//     for(ll i = 3; i*i <= n; i++) {
//         if(n % i == 0) {
//             divisors.insert(i);
//             n /= i;
//         }
//     }
//     if(n > 1) divisors.insert(n);

//     if(divisors.size() != 2) return false;

//     return true;
// }

// ll count_almost_divisors(ll n) {
//     ll count = 0;
//     for(ll i = 1; i <= n; i++) {
//         if(almost_prime(i)) count++;
//     }
//     for(ll i = 1; i <= n; i++) {
//         if(almost_prime(i)) cout << i << " ";
//     }
//     return count;
// }


// void solve() {
//     ll n; cin >> n; 
//     ll count = count_almost_divisors(n);
//     cout << count << endl;
// }

void solve() {
    ll n; cin >> n; 
    ll ans = 0;

    for(ll i = 2; i <= n; i++) {
        ll cnt = 0;
        ll num = i;
        for(ll j = 2; j * j <= num; j++) {
            if(num % j == 0) {
                cnt++;
                while(num % j == 0) {
                    num /= j;
                }
            }
        }
        if(num > 1)cnt++;
        if(cnt == 2)ans++;
    }
    cout << ans << endl;
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