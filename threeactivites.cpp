#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

vector<ll> findMax3(vector<ll>& arr) {
    vector<pair<ll,ll>> tmp(arr.size()); //(*ele, ind)

    for(ll i = 0; i < tmp.size(); i++) {
        tmp[i].first = arr[i];
        tmp[i].second = i;
    }
    sort(tmp.rbegin(), tmp.rend());

    vector<ll> ans(3);
    for(ll i = 0; i < 3; i++) ans[i] = tmp[i].second;
    return ans;
}

void solve() {
    ll n; cin >> n;
    vector<ll> a(n), b(n), c(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];
    for(ll i = 0; i < n; i++) cin >> c[i];

    vector<ll> maxa = findMax3(a);
    vector<ll> maxb = findMax3(b);
    vector<ll> maxc = findMax3(c);

    ll ans = 0; 
    for(ll i = 0; i < 3; i++) {
        for(ll j = 0; j < 3; j++) {
            for(ll k = 0; k < 3; k++) {
                ll x = maxa[i], y = maxb[j], z = maxc[k];
                if((x == y) || (y == z) || (z == x)) continue;
                ans = max(ans, a[x] + b[y] + c[z]);
            }
        }
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