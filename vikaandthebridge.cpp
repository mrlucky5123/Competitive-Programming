#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(auto& i : a) cin >> i; // O(N)

    vector<ll> colors[k+1];

    for(ll i = 1; i <= k; i++) {
        colors[i].push_back(0);
    }
    for(ll i = 0; i < n; i++) {
        colors[a[i]].push_back(i+1);
    }
    for(ll i = 1; i <= k; i++) {
        colors[i].push_back(n+1);
    }

    priority_queue<ll> jumps[k+1]; // ! 0, 4, 9, 10, 12 -> 3, 4, 0, 1 -> 4, 3, 1, 0
    //! _ 1 2 3 _
    ll ans = INT_MAX;
    for(ll i = 1; i <= k; i++) {
        for(ll j = 0; j < colors[i].size() - 1; j++) {
            jumps[i].push(colors[i][j+1] - colors[i][j]-1);
        } // O(NlogN)
        ll max_val = jumps[i].top();
        jumps[i].pop();

        if(max_val % 2 == 0) {
            jumps[i].push(max_val / 2);
            jumps[i].push((max_val / 2) - 1);
        } else {
            jumps[i].push(max_val / 2);
            jumps[i].push(max_val / 2);
        }

        ans = min(ans, jumps[i].top());
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