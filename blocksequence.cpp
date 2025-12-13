#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    for(auto & i : a) cin >> i;

    vector<ll> dp(n + 1);
    dp[n] = 0;
    for(ll i = n - 1; i >= 0; i--) {
        dp[i] = dp[i + 1] + 1;
        ll j = i + a[i] + 1;
        if(j <= n) {
            dp[i] = min(dp[i], dp[j]);
        }
    }
    cout << dp[0] << endl;
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