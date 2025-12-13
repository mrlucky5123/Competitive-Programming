#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, q; cin >> n >> q;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll maxi = 32;
    while(q--) {
        ll x; cin >> x;
        if(x >= maxi) continue;
        maxi = x;
        for(ll i = 0; i < n; i++) {
            if((a[i] & ((1 << x) - 1)) == 0)
                a[i] += ((1 << x) - 1);
        }
    }
    for(auto& i : a) cout << i << " ";
    cout << endl;

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