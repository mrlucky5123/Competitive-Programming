#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a)cin >> i;

    vector<ll> pre(n);
    pre[0] = a[0];
    for(ll i = 1; i < n; i++) {
        pre[i] = a[i] + pre[i-1];
    }

    ll ans = 0;
    for(ll k = 1; k < n; k++) {
        if(n % k != 0)continue;
        ll start = k - 1;
        ll maxi = pre[start];
        ll mini = pre[start];
        for(ll i = start+k; i < n; i+=k){
            ll curr = pre[i] - pre[i-k];
            maxi = max(maxi,curr);
            mini = min(mini, curr);
        }
        ans = max(ans, maxi-mini);
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