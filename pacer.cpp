#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n, m, x; cin >> n >> m;
    vector<pair<ll,ll>> a(m);
    for(ll i = 0; i < n; i++) {
        cin >> a[i].first;
        x = a[i].first;
        if(i == x) {
            cin >> a[i].second;
        } else {
            a.push_back({i, (ll)-1});
        }
    }
    ll state = 0;
    for(ll i = 0; i < m; i++) {
        
    }
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