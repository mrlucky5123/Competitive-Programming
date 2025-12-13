#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    vector <ll> ans;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        if(i != a[i]) {
            ans.push_back(a[i]);
        }
    }

    ll res = 0;
    for(ll i = 1; i <= ans.size(); i++) {
        res = min(res,a[i] & a[i-1]);
    }
    cout << res << endl;
    // ll n; cin >> n;
    // ll ans = (1 << 30) - 1;
    // for(ll i = 0; i < n; i++) {
    //     ll x; cin >> x;
    //     if(x != i) ans &= x;
    // }
    // cout << ans << endl;
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