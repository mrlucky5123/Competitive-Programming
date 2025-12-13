#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
      
    ll sum = 0, minimal = 0, maximal = 0;
    for(ll i = 0; i < n; i++) {
      sum += a[i];
      maximal += ceil(a[i]*1.0 /x);
    }
    minimal = ceil(sum*1.0 / x);
    cout << minimal << " " << maximal << endl;
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