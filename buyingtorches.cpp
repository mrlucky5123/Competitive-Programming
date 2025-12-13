#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

ll ceil_division(ll a, ll b) { return (a + b - 1) / b; }

void solve() {
    ll x, y, k; cin >> x >> y >> k;

    ll total_sticks_required = k * y + k - 1;
    ll stick_per_trade = x - 1;
    ll trades = 0;
    trades += ceil_division(total_sticks_required, stick_per_trade);
    trades += k;
    cout << trades << endl;
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