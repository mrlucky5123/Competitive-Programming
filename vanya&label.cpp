#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

const ll MOD = 1000000007;

ll charToValue(char c) {
    if(c >= '0' && c <= '9') {
        return c - '0';  // 0-9
    }
    if(c >= 'A' && c <= 'Z') {
        return c - 'A' + 10; // 10-36
    }
    if(c >= 'a' && c <= 'z') {
        return c - 'a' + 36; // 36-61
    }
    if(c == '-'){
        return 62;
    }
    if(c == '_'){
        return 63;
    }
    return 0;
}

ll countZeroBits(ll num) {
    ll count = 0;
    for(ll i = 0; i < 6; i++) {
        if((num & (1 << i)) == 0) {
            count++;
        }
    }
    return count++;
}

ll power(ll base, ll exp, ll mod) {
    ll result = 1; 
    base %= mod;

    while(exp > 0) {
        if(exp & 1) { 
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp >>= 1; // divide exp by 2
    }
    return result;
}

ll powof3[7];
void precompute() {
    powof3[0] = 1;
    for(ll i = 1; i <= 6; i++) {
        powof3[i] = (powof3[i-1] * 3) % MOD;
    }
}
void solve() {
    string s; cin >> s;

    ll result = 1;

    for(ll i = 0; i < s.length(); i++) {
        char c = s[i];

        // encoded value in binary
        ll val = charToValue(c);
        // no. of zero bits 
        ll zeroes = countZeroBits(val);
        // calculate 3^zeroes mod MOD
        // ll pairs = power(3, zeroes, MOD);
        ll pairs = powof3[zeroes];
        // multiply to result
        result = (result * pairs) % MOD;
    }

    cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();
    long long t = 1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}