#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

void solve() {
    ll a, b;
    cin >> a >> b;

    ll ans = INT_MAX;
    for(ll addition = 0; addition < 32; addition++) {
        ll operations = addition;
        ll new_b = b + addition;
        if(new_b == 1) {
            continue;
        }
        ll copy_a = a;
        while(copy_a > 0) {
            copy_a /= new_b;
            operations++;
        }
        ans = min(ans, operations);
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