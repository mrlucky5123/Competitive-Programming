#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n, c; cin >> n >> c;
    vector<ll> a(n), cost(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        cost[i] = a[i] + i + 1;
    }
    
    sort(cost.begin(), cost.end());
    ll ans = 0; 
    for(ll i = 0; i < n; i++) {
        if(c >= cost[i]){
            ans++;
            c -= cost[i];
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