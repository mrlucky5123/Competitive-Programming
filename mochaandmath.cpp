#include<bits/stdc++.h>
typedef long long ll;
#define endl '\n'
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    // ll result = ~0;
    ll result = a[0];
    // for(ll i = 0; i < n; i++) {
    //     result &= a[i];
    // }
    for(ll i = 1; i < n; i++) {
        result &= a[i];
    }
    cout << result << endl;
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