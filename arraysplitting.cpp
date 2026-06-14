#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    ll base_cost = a[n-1] - a[0];
    vector<ll> diff(n);
    for(ll i = 1; i < n; i++) {
        diff[i-1] = a[i] - a[i-1];
    }
    sort(diff.rbegin(), diff.rend());

    ll sum = 0;
    for(ll i = 0; i < k-1; i++) {
        sum += diff[i];
    }
    cout << base_cost - sum << endl;
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