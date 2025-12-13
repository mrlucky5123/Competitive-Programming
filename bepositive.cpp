#include<bits/stdc++.h>
#define ll long long
#define endll '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    ll count_0 = 0, count_minus_1 = 0;
    
    for(ll i = 0; i < n; i++) {
      cin >> a[i];
      if(a[i] == 0)count_0++;
      else if(a[i] == -1) count_minus_1++;
    }
    
    ll ans = 0;
    if(count_minus_1 % 2 == 0) cout << count_0 << endl;
    else cout << count_0 + 2 << endl;
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