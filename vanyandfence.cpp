#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, h; cin >> n >> h;
    ll ans = 0;
    while(n--) {
        ll x; cin >> x;
        if(x <= h) ans++;
        else ans += 2; 
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