#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

void solve() {
    ll a, b; cin >> a >> b;
    ll parity1 = a % 2;
    ll parity2 = b % 2;

    if(a == b) {
        cout << 0 << endl;
        return;
    }

    if(a == 1 || b == 1) {
        cout << 1 << endl;
        return;
    }

    if(parity1 == parity2 && (a%b == 0 || b%a == 0)) {
        cout << 1 << endl;
        return;
    }
    
    cout << 2 << endl;
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