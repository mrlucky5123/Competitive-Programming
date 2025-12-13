#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve() {
    ll a, b;
    cin >> a >> b;

    if(b > a) swap(a, b);
    if(a == b) cout << 0 << " " << 0 << endl;

    else {
        ll gcd = a - b;
        ll moves = min(b % gcd, gcd - (b % gcd));
        cout << gcd << " " << moves << endl;
    }
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