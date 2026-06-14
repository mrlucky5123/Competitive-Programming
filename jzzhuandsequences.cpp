#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

ll const mod = 1e9 + 7;

void solve() {
    ll x, y, z; cin >> x >> y >> z;
    vector<ll> a(7);
    a[1] = x;
    a[2] = y;
    a[3] = a[2]-a[1];
    a[4] = a[3]-a[2];
    a[5] = a[4]-a[3];
    a[6] = a[5]-a[4];

    ll rem = z % 6;
    if(rem == 0) rem = 6;

    ll ans = a[rem] % mod;
    if(ans < 0) ans += mod;
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