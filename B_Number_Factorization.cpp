#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    ll num = n; 

    vector<pair<ll, ll>> primes_with_exponent;
    for(ll i = 2; i*i <= n; i++) {
        if(num%i==0) {
            ll cnt = 0;
            while(num % i == 0) {
                cnt++;
                num /= i;
            }
            primes_with_exponent.push_back({i, cnt});
        }
    }
    if(num > 1) {
        primes_with_exponent.push_back({num, 1});
    }

    
    // ll ans = 0;
    // for(auto& i : primes_with_exponent)  {
    //     ll curr = 1;
    //     ll prime = i.first;
    //     ll power = i.second;
    //     if(power > 0) {
    //         curr *= prime;
    //         power--;
    //     }
    //     ans += curr;
    // }
    ll ans = 0;
    while(true) {
        ll curr = 1; 
        bool found = false;
        for(auto& i : primes_with_exponent) {
            if(i.second>0) {
                curr *= i.first;
                i.second--;
                found = true;
            }
        }
        if(!found) break;
        ans += curr;
    }
    cout << ans << endl;
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