#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// ll result = 1;

// ll recurse(int a, int result, int b) {
//   if(b == 0) return result;
//   result *= a;
//   b--; 
//   return recurse(a,result, b);
// }

ll recurse(int a, int b) {
  if(b == 0) return 1;
  return (a * recurse(a,b-1));
}

void solve() {
    ll a, b; cin >> a >> b;
    // ll ans = recurse(a, result, b);
    ll ans = recurse(a,b);
    cout << ans << endl;
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