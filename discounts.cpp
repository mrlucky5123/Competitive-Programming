#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n), b(k);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < k; i++)  cin >> b[i];

    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());
    
    ll ans = 0;
    ll left = 0, right = 0;
    while(left < n && right < k) {
        ll x = b[right];
        while(x > 1 && left < n) {
            ans += a[left];
            left++;
            x--;
        }
        left++;
        right++;
    }
    while(left < n) {
        ans += a[left];
        left++;
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