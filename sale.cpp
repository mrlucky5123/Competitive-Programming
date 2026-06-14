#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll m, n;
    cin >> m >> n;
    vector<ll> a(m);
    for(ll i = 0; i < m; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        if(a[i] < 0) {
            ll k = abs(a[i]);
            ans += k;
        } else {
            break;
        }
        
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}