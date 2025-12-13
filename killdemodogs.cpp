#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;
#define mod 1000000007

void solve() {
    ll n; cin >> n;
    ll ans = (n%mod*(n+1)%mod*(4*n-1)%mod)*337%mod;
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