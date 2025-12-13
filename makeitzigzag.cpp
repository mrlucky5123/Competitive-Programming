#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> pre_max(n);
    pre_max[0] = a[0];
    for(ll i = 1; i < n; i++) {
        pre_max[i] = max(a[i], pre_max[i-1]);
    }
    for(ll i = 1; i < n; i += 2) {
        a[i] = pre_max[i];
    }

    ll ans = 0;
    for(ll i = 0; i < n; i+=2) {
        ll mini = LLONG_MAX;
        if(i-1 >= 0) {
            mini = min(mini, a[i-1]);
        }
        if(i + 1 < n) {
            mini = min(mini, a[i+1]);
        }
        if(a[i] >= mini) {
            ans += a[i] - mini + 1;
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