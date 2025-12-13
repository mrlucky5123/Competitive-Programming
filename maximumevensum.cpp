#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

ll precompute(ll a, ll b) {
    ll max_even = -1;
    double sqrt_b = sqrt(b);
    ll limit = min((ll)sqrt_b, 1000000000000000000LL/a);
    for(ll i = 1; i <= limit; i++) {
        if(b % i == 0) {
            ll new_a = a*i;
            ll new_b = b/i;
            ll res = new_a + new_b;
            if(res % 2 == 0) {
                max_even = max(max_even, res);
            }

            ll j = b/i;
            if(j != i) {
                if(j <= 10000000000000000LL/a) {
                    new_a = a*j;
                    new_b = b/j;
                    res = new_a + new_b;
                    if(res % 2 == 0) {
                        max_even = max(max_even, res);
                    }
                }
            }
        }
    }
    return max_even;
}

void solve() {
    ll a, b; 
    cin >> a >> b;
    ll ans = precompute(a, b);
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