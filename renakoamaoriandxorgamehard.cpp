#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n+1), b(n+1);
    
    for(ll i = 1; i <= n; i++) cin >> a[i];
    for(ll i = 1; i <= n; i++) cin >> b[i];
    
    ll xor_a = 0, xor_b = 0;
    
    for(ll i = 1; i <= n; i++) {
        xor_a ^= a[i];
        xor_b ^= b[i];
    }
    
    for(ll i = 1; i <= n; i++) {
        if(a[i] == b[i]) continue;
        
        if(i % 2 == 1) {
            if(xor_a < xor_b) {
                swap(a[i], b[i]);
                xor_a = xor_a ^ a[i] ^ b[i];
                xor_b = xor_b ^ b[i] ^ a[i];
            }
        } else {
            if(xor_b < xor_a) {
                swap(a[i], b[i]);
                xor_a = xor_a ^ a[i] ^ b[i];
                xor_b = xor_b ^ b[i] ^ a[i];
            }
        }
    }
    
    if(xor_a > xor_b) {
        cout << "Ajisai" << endl;
    } else if(xor_a < xor_b) {
        cout << "Mai" << endl;
    } else {
        cout << "Tie" << endl;
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