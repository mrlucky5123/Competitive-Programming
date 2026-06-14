#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
const ll mod = 1e9 + 7;

void solve() {
    ll n, k; cin >> n >> k;

    ll ans = 1;
    for(ll i = 0; i < k; i++) {
        ans = (ans*n) % mod;
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