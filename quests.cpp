#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];

    ll maxi = 0, sum = 0, ans = 0;
    for(ll i = 0; i < min(n, k); i++) {
        sum += a[i];
        maxi = max(maxi, b[i]);
        ans = max(ans, sum + (k-i-1)*maxi);
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