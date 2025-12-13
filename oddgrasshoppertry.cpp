#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll x, n; cin >> x >> n;

    if(n <= 4) {
      for(ll i = 1; i <= n; i++) {
        if(x&1) x = x + i;
        else x = x - i;
      }
      cout << x << endl;
      return;
    }

    ll new_n = n;
    while(new_n % 4 != 0) {
        new_n--;
    }
    for(ll i = new_n+1; i <= n; i++) {
        if(x&1) x = x + i;
        else x = x - i;
    }
    cout << x << endl;
}

// -1
// 1
// 11
// 110
// 190
// 9012345679
// -87611785637
// 1
// 0


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