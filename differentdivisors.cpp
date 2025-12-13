#include<bits/stdc++.h>  // This includes all standard C++ libraries (like iostream, math, etc.) for convenience. In contests, it's a shortcut.

#define ll long long  // Defines 'll' as shorthand for 'long long' (64-bit integer). We use it for big numbers, since a can be up to ~10000*20000 = 200M, but p^3 could be larger (but still fits in ll).

#define endl '\n'  // Defines 'endl' as newline. Used for output formatting.

using namespace std;  // Allows us to use cout, cin without 'std::' prefix.

ll next_prime(ll n) {  // Function to find the smallest prime >= n.
    for(ll i = n;; i++) {  // Start from i=n, increment forever until we find a prime.
        bool is_prime = true;  // Assume i is prime initially.
        for(ll j = 2; j*j <= i; j++) {  // Check divisibility from 2 to sqrt(i) (efficient way to test primality).
            if(i % j == 0) {  // If j divides i, not prime.
                is_prime = false;
                break;  // Stop checking further.
            }
        }
        if(is_prime) return i;  // If no divisors found, i is prime—return it.
    }
}

void solve() {  // Function for one test case.
    ll n; cin >> n;  // Read d (called n here—probably a variable reuse).
    
    ll p = next_prime(n+1);  // Find smallest prime p >= d+1.
    ll q = next_prime(p+n);  // Find smallest prime q >= p + d.
    
    ll a = min(1LL*p*p*p, 1LL*p*q);  // Compute min(p^3, p*q). '1LL' ensures long long multiplication to avoid overflow.
    cout << a << endl;  // Output a followed by newline.
}

int main() {  // Entry point of the program.
   ios_base::sync_with_stdio(false);  // Speeds up input/output by disabling sync with C stdio.
   cin.tie(NULL);  // Unties cin from cout for faster input.
   long long t;  // Number of test cases.
   cin >> t;  // Read t.
   while(t--) {  // Loop t times.
       solve();  // Call solve() for each test case.
   }
   return 0;  // Program ends successfully.
}