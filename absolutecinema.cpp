#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];

    for(ll i = 0; i < n; i++) {
        if(a[i] > b[i]) {
            swap(a[i], b[i]);
        }
    }

    ll maxi = *max_element(a.begin(), a.end());
    cout << maxi + accumulate(b.begin(), b.end(), 0LL) << endl;
    // ll maxi2 = *max_element(b.begin(), b.end());

    // if(maxi < maxi2) cout << (maxi-maxi2) + accumulate(b.begin(), b.end(), 0LL) << endl;
    // // else cout << maxi + accumulate(b.begin(), b.end(), 0LL) << endl;

    
    
    // ll maxi = max(a[n-1], b[n-1]);

    // ll sum = accumulate(b.begin(), b.end(), 0LL);
    // ll ans = sum + maxi; 
    // cout << ans << endl;
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