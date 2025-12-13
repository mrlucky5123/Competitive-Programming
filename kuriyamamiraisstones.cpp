#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    
    vector<ll> a(n+1, 0);
    for(ll i = 1; i <= n; i++) cin >> a[i];
    
    // vector<ll> b(a);
    // sort(b.begin() + 1, b.end());
    
    vector<ll> pre1(n+1, 0), pre2(n+1, 0);
    // for(ll i = 1; i <= n; i++) {
    //   pre1[i] = pre1[i-1] + a[i]; 
    //   pre2[i] = pre2[i-1] + b[i];
    // }

    for(ll i = 1; i <= n; i++) {
        pre1[i] = pre1[i-1] + a[i];
    }
    sort(a.begin(), a.end());
    for(ll i = 1; i <= n; i++) {
        pre2[i] = pre2[i-1] + a[i];
    }
    
    ll m; cin >> m;
    while(m--) {
      ll type, l , r;
      cin >> type >> l >> r;
      
      if(type == 1) {
        cout << pre1[r] - pre1[l-1] << endl;
      } else {
        cout << pre2[r] - pre2[l-1] << endl;
      }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}