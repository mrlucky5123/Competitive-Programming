#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
#define mod (ll)(1e9+7)

ll power_recursive(ll n, ll k) {
    if(k == 0) return 1;
    ll ans = power_recursive(n, k-1);
    ans %= mod;
    ans *= n;
    ans %= mod;
    return ans;
}

ll power(ll base, ll exp) {
    ll result = 1;
    while(exp > 0) {
        if(exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve() {
    ll n, k; cin >> n >> k;
    cout << power(n, k) << endl;
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