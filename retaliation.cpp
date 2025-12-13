#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    // if(a[0] <= n || a[n-1] <= n) {
    //     cout << "NO" << endl;
    //     return;
    // }

    ll d = a[1] - a[0];
    for(ll i = 1; i < n - 1; i++) {
        if(a[i+1] - a[i] != d) {
            cout << "NO" << endl;
            return;
        }
    }

    // divisibility condition check
    ll n_plus_one = n + 1;
    ll x = a[0] + n * d ;
    ll y = a[0] - d;
    if(x % n_plus_one != 0 || y % n_plus_one != 0) {
        cout << "NO" << endl;
        return;
    }

    //making sure that x and y are non-negative
    if(x / n_plus_one < 0 || y / n_plus_one < 0) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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