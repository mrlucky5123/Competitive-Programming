#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n, m; cin >> n >> m; 

    vector<ll> a(n), b(m);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll ans = 0;
    ll la = 0, ra = n - 1, lb = 0, rb = m - 1;
    while(la <= ra) {
        ll left = abs(a[la] - b[rb]);
        ll right = abs(a[ra] - b[lb]);
        if(left > right) {
            ans += left;
            la++;
            rb--;
        }else {
            ans += right;
            ra--;
            lb++;
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