#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
const ll mod = 1e9 + 7;

void solve() {
    ll n; cin >> n;
    ll ans = 1;
    vector<ll> a(n), b(n), res(n);
    for(auto& i : a) cin >> i;
    for(auto& i : b) cin >> i;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll j = 0;
    for(ll i = 0; i < n; i++) {
        while(a[j] <= b[i] && j != n) {
            j++;
        }
        if(j != n) {
            res[i] = n - j;
        }
    }

    sort(res.begin(), res.end());
    for(ll i = 0; i < (ll)res.size(); i++) {
        ans = ((ans%mod)*((res[i]-i)%mod))%mod;
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