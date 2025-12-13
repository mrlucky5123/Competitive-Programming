#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;


void solve() {
    ll n, k, a, b; cin >> n >> k >> a >> b;
    vector<ll> x(n+1), y(n+1);
    for(ll i = 1; i <= n; i++) cin >> x[i] >> y[i]; // o(n)

    ll ans = abs(x[a] - x[b]) + abs(y[a] - y[b]);
    if(k == 0) {
        cout << ans << endl;
        return;
    }
    // ll minx = 1e17, miny = 1e17;
    ll minx = LLONG_MAX, miny = LLONG_MAX;
    for(ll i = 1; i <= k; i++) { //o(k)
        minx = min(minx, abs(x[a] - x[i]) + abs(y[a] - y[i]));
        miny = min(miny, abs(x[b] - x[i]) + abs(y[b] - y[i]));
    }
    ans = min(ans, minx + miny);
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