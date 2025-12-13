#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    ll ans = 0;
    ll i = n - 1;
    while(i >= 0 && a[i] == a[n-1]) {
        i--;
    }
    if(i == -1) {
        cout << 0 << endl;
        return;
    }
    while(i >= 0) {
        i -= (n - 1 - i);
        ans++;
        while(i >= 0 && a[i] == a[n-1]) {
            i--;
        }
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