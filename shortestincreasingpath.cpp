#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll x, y; cin >> x >> y; 
    if(x == y ) {
        cout << -1 << endl;
        return;
    } else if (y == 1) {
        cout << -1 << endl;
        return;
    } else if(abs(x - y) == 1 && x > y) {
        cout << -1 << endl;
        return;
    } else {
        if(x < y) {
            cout << 2 << endl;
            return;
        } else if( x > y && abs(x-y) > 1) {
            cout << 3 << endl;
            return;
        }
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