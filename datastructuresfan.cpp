#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n+1);
    for(ll i = 1; i <= n; i++) cin >> a[i]; //O(n)
    string s; cin >> s;
    s = "*" + s; // 1 based indexing

    ll xr0 = 0, xr1 = 0;
    for(ll i = 1; i <= n; i++) {
        if(s[i] == '1') xr1 ^= a[i];
        else xr0 ^= a[i];
    }

    vector<ll> prXOr(n+1, 0);
    for(ll i = 1; i <= n; i++) {
        prXOr[i] = prXOr[i-1] ^ a[i];
    }

    ll q; cin >> q;
    while(q--) { // O(q)
        ll tp; cin >> tp;
        if(tp == 1) {
            ll l, r; cin >> l >> r;
            ll xrlr = prXOr[r] ^ prXOr[l-1];
            xr0 ^= xrlr;
            xr1 ^= xrlr;
        } else {
            ll g; cin >> g;
            if(g == 0) cout << xr0 << " ";
            else cout << xr1 << " ";
        }
    }
    cout << endl;
}

// t.c :- O(n + q)
// s.c :- O(n)

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