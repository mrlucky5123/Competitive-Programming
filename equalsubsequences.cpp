#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll i = 0; i < k; i++) {
      a[i] = 1;
    }
    for(ll i = 0; i < n; i++) {
      cout << a[i];
    }
    cout << '\n';
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