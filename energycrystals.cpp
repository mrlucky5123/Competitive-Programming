#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve() {
    ll n;
    cin >> n;
    cout << 2 * (64 - __builtin_clzll(n)) + 1 << "\n";
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