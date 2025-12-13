#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;

    ll m = (n * (n - 1)) / 2;

    vector<ll> a(m);
    for(ll i = 0; i < m; i++) cin >> a[i];

    sort(a.begin(), a.end());
    ll x = n -1 , i = 0;
    while(x > 0) {
        cout << a[i] << " ";
        i += x;
        x--;
    }
    cout << "1000000000" << endl;
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