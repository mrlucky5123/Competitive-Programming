#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    ll ans = 0;
    ll currPos = 1;
    while(currPos <= n) {
        ll nxt = min(n, (currPos *2) - 1);
        ans = max(ans, nxt - currPos + 1);
        currPos *= 2;
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