#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, l; cin >> n >> l;
    vector<ll> a(n);
    ll max_d = LLONG_MIN;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll first_gap = a[0] - 0, last_gap = l - a[n-1];

    for(ll i = 1; i < n; i++) {
        max_d = max(max_d, a[i] - a[i-1]);
    }

    double max_gap = max_d / 2.0;
    double result = max({(double)first_gap, (double)last_gap, max_gap});

    cout << fixed << setprecision(10) << result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    // cin >> t ;
    while(t--) {
       solve();
    }
    return 0;
}