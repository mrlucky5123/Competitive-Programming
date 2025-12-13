#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll total_sum = 0;
    ll odd_count = 0;
    vector<ll> odds;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
        if (a[i] % 2 == 1) {
            odd_count++;
            odds.push_back(a[i]);
        }
    }
    
    if (odd_count == 0) {
        cout << 0 << endl;
        return;
    }
    
    // Sort odds ascending to sacrifice the smallest floor(odd_count/2)
    sort(odds.begin(), odds.end());
    
    ll removed = 0;
    for (ll i = 0; i < odd_count / 2; i++) {
        removed += odds[i];
    }
    
    cout << total_sum - removed << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}