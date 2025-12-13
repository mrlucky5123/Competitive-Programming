#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;
    sort(a.begin(), a.end());

    vector<ll> pre(n + 1, 0);
    pre[0] = a[0];
    for(ll i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + a[i];
    }

    ll ans = 0;
    for(ll first = 0; first <= k; first++) {
        ll second = k - first;
        ll left = 2 * first;
        ll right = n - second - 1;
        ll sum = pre[right]-(left == 0 ? 0 : pre[left-1]);
        ans = max(ans, sum);
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