#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    sort(a.begin(), a.end());

    ll ans = 0, cnt = 0;

    for(ll i = 0; i < n; i++) {
        ll e = a[i];
        cnt++;
        if(cnt >= e) {
            ans++;
            cnt = 0;
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