#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n, p;
    cin >> n >> p;
    vector<ll> a(n), b(n);
    vector<pair<ll, ll>> v(n);

    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];
    for(ll i = 0; i < n; i++) v[i] = {b[i], a[i]};

    sort(v.begin(), v.end());

    // for(auto it : v) {
    //     cout << it.first << " " << it.second << endl;
    // }

    ll minimum_cost = p;
    ll already_shared = 1;
     
    for(auto it : v) {
        ll can_be_shared = it.second;
        ll sharing_cost = it.first;

        if(sharing_cost >= p) break;

        if(already_shared + can_be_shared > n) {
            minimum_cost += (n-already_shared) * sharing_cost;
            already_shared = n;
            break;
        } else {
            minimum_cost += can_be_shared * sharing_cost;
            already_shared += can_be_shared;
        }
    }

    minimum_cost += (n-already_shared) * p; // chief sharing
    cout << minimum_cost << endl;
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