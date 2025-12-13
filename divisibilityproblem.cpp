#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll a, b; cin >> a >> b;

    if(a < b) {
        cout << b - a << endl;
        return;
    }
    if(a % b == 0) {
        cout << 0 << endl;
        return;
    }

    if(a > b) {
        ll rem = a % b;
        cout << b - rem << endl;
        return;
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