#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// vector<ll> getprimes(ll n) {
//     vector<ll> prime_numbers;

//     while(n%2 == 0) {
//         prime_numbers.push_back(2);
//         n /= 2;
//     }

//     for(ll i = 3; i*i <= n; i+=2) {
//         while(n%i == 0) {
//             prime_numbers.push_back(i);
//             n /= i;
//         }    
//     }
//     if(n > 2) prime_numbers.push_back(n); //prime number itself

//     return prime_numbers;
// }

void solve() {
    ll n; cin >> n;
    if(n < 24) {
        cout << "NO" << endl;
        return;
    }
    // vector<ll> prime_numbers = getprimes(n);

    for(ll a = 2; a*a <= n; a++) {
        if(n % a == 0) {
            ll m = n / a;

            for(ll b = 2; b*b <= m; b++) {
                if(m % b == 0) {
                    ll c = m / b;
                    
                    if(a != b && a != c && c != b) {
                        cout << "YES" << endl;
                        cout << a << " " << b << " " << c << endl;
                        return;
                    }
                }
                
            }
        }
        
    }
    cout << "NO" << endl;

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