#include<bits/stdc++.h>
#define ll long long
#define endll '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll ans = INT_MIN;
    ll i = 0, j = 0;
    ll sum = 0;

    while(j < n) {
        if(sum < 0) {
            sum = 0;
            i = j;
        } 
        if(i < j) {
            if((a[j] ^ a[j-1]) & 1) {
                sum += a[j];
            } else {
                sum = a[j];
                i = j;
            }
        } else {
            sum = a[j];
        }
        ans = max(ans, sum);
        j++;
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