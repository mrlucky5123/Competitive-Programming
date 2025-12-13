#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    // for(ll i = 0; i < n; i++) cin >> a[i];
    for(auto &i : a) cin >> i;

    ll sum = accumulate(a.begin(), a.end(), 0LL);
    ll ans = 0;
    ll rest = sum / 2;
    ans = sum - rest;

    sort(a.rbegin(), a.rend());

    for(auto x : a) {
        if(rest <= 0) break;
        rest -= x;
        ans++;
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