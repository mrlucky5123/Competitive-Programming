#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    ll ans = 0;
    if(n % 3 == 0) {
        ans = 0;
    } else {
        // while(n % 3 != 0) {
        //     n++;
        //     ans++;
        // }
        ll rem = n % 3;
        ans = 3 - rem;
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