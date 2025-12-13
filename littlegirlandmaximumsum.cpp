#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, q; cin >> n >> q;
    vector<ll> a(n+1, 0);
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<ll> diff(n+2, 0);
    for(ll i = 0; i < q; i++) {
        ll l, r;
        cin >> l >> r;
        diff[l] += 1;
        diff[r+1] -= 1;
    }

    for(ll i = 1; i <= n; i++) {
        diff[i] += diff[i-1];
    }

    sort(diff.begin()+1, diff.begin()+n+1, greater<ll>());
    sort(a.begin()+1, a.end(), greater<ll>());

    ll ans = 0;
    for(ll i = 1; i<= n; i++) {
        ans += diff[i]*a[i];
    }
    cout << ans << endl;
    return 0;
}