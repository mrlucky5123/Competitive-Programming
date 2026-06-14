#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;

    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    vector<ll> t(n);
    for(auto& i : t) cin >> i;

    ll base = 0;
    for(ll i = 0; i < n; i++) {
        if(t[i] == 1) {
            base += a[i];
        }
    }
    ll extra = 0;
    ll currExtra = 0;
    for(ll i = 0; i < k; i++) {
        if(t[i] == 0) {
            currExtra += a[i];
        }
    }
    extra = currExtra;
    for(ll i = k; i < n; i++) {
        if(t[i-k] == 0) {
            currExtra -= a[i-k];
        }
        if(t[i] == 0) {
            currExtra += a[i];
        }
        extra = max(extra, currExtra);
    }
    cout << base + extra << endl;
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