#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    string s; cin >> s;

    ll ans = 0;
    vector<ll> isRemoved(n+1, false);

    for(ll i = 1; i <= n; i++) {
        for(ll j = i; j <= n; j += i) {
            if(s[j-1] == '1') {
                break;
            }
            if(isRemoved[j]) {
                continue;
            } else {
                isRemoved[j] = true;
                ans += i;
            }
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