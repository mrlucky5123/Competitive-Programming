#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve() {
    ll n, m, x, y; cin >> n >> m >> x >> y;
    vector<ll> a(n), b(m);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < m; i++) cin >> b[i];

    cout << n + m << endl;
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