#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n), b(n);
    for(auto& x : a) cin >> x;
    for(auto& x : b) cin >> x;
    
    for(ll i = 0; i < n-k; i++) {
        if(b[i] == -1) b[i] = a[i];
        else if(b[i] != a[i]) {
            cout << "NO" << endl;
            return;
        }
    }
    
    multiset<ll> ma, mb;
    for(ll i = n-k; i < n; i++) {
        ma.insert(a[i]);
        if(b[i] != -1) mb.insert(b[i]);
    }
    
    for(auto x : mb) {
        if(ma.find(x) == ma.end()) {
            cout << "NO" << endl;
            return;
        }
        ma.erase(ma.find(x));
    }
    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}