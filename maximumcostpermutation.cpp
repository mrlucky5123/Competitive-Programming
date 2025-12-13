#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n+1, 0);
    for(ll i = 1; i < n + 1; i++) cin >> a[i];
    // for(ll i = 1; i < n + 1; i++) cout << a[i] << " ";
    // cout << endl;

    ll start_idx = 0, end_idx = 0;
    vector<bool> good(n+1, false);
    for(ll i = 1; i < n+1; i++) {
        if(i == a[i] ) {
            good[i] = true;
        }
    }
    for(ll i = 1; i < n+1; i++) {
        cout << good[i] << " ";
    }
    cout << endl;
    for(ll i = 1; i < n + 1; i++) {
      if(good[i] == 0) {
        start_idx = i;
      }
    }
    for(ll i = n + 1; i>= 1; i--) {
      if(good[i] == false) {
        end_idx = i;
      }
    }
    cout << start_idx << " " << end_idx << endl;
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