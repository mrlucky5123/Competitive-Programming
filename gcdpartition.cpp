#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    ll total_sum = accumulate(a.begin(), a.end(), 0LL);
    ll sum = 0;
    ll ans = INT_MIN; 
    for(ll i = 0; i < n - 1; i++) {
        sum += a[i];
        ans = max(ans, __gcd(sum, total_sum - sum));
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