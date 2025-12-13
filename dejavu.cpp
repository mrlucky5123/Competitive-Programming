#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n, q; cin >> n >> q;
    vector<ll> a(n), x(q);
    for(auto& i : a) cin >> i;
    for(auto& i : x) cin >> i;

    ll prev = 31;
    for(ll i = 0; i < q; i++) {
        if(x[i] >= prev) continue;
        ll val = pow(2, x[i]);
        for(ll j = 0; j < n; j++) {
            if(a[j] % val == 0) {
                a[j] += (val/2);
            }
        }
        prev = x[i];
    }
    for(auto& it : a) cout << it << " ";
    cout << endl;
}

// T.C :- O(q+n*30);
//S.C :- O(q+n);

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