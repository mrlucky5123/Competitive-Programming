#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll k; cin >> k;
    vector<ll> a(12);
    for(ll i = 0; i < 12; i++) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());
    ll ans = 0, curr_sum = 0;
    for(ll i = 0; i < 12; i++) {
        if(curr_sum >= k) break;
        curr_sum += a[i];
        ans++;
    }
    if(curr_sum < k) {
        cout << -1 << endl;
        return;
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