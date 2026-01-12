#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, m; cin >> n >> m;

    ll ans = 0;
    while(m > n) {
        if(!(m&1)) {
            m /= 2;
            ans++;
        } else {
            m += 1;
            ans++;
        }
    }
    ans += (n-m);
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