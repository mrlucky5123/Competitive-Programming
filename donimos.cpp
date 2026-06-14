#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(2*n);
    for(ll i = 0; i < 2*n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    vector<ll> totals(n);
    for(ll i = 0; i < n; i++) {
        totals[i] = a[i] + a[2*n - 1 - i];
    }
    cout << *max_element(totals.begin(), totals.end()) - *min_element(totals.begin(), totals.end()) << endl;
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