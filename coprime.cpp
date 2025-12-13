#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
vector<ll> pairs[1001];

void solve() {
    ll n; cin >> n;
    vector<ll> idx(1001, 0);
    for(ll i = 1; i <= n; i++) {
        ll x; cin >> x;
        idx[x] = i;
    }
    ll ans = -1;
    for(ll i = 1; i <= 1000; i++) {
        if(idx[i] == 0) continue;
        for(auto j : pairs[i]) {
            if(idx[j] != 0) {
                ans = max(ans, idx[i] + idx[j]);
            }
        }
    }
    cout << ans << endl;
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   for(ll i = 1; i <= 1000; i++) {
    for(ll j = 1; j <= 1000; j++) {
        if(__gcd(i,j) == 1) {
            pairs[i].push_back(j);
        }
    }
   }
   long long t;
   cin >> t;
   while(t--) {
       solve();
   }
   return 0;
}