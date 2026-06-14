#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, x; cin >> n >> x;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    ll l = 0, curr_sum = 0, len1 = 0, len2 = 0, ans = 0;
    for(ll r = 0; r < n; r++) {
        curr_sum += a[r];
        if(curr_sum % x != 0) {
            len1 = max(len1, r - l + 1);
        }
    }
    l = n - 1, curr_sum = 0;
    for(ll r = n-1; r >= 0; r--) {
        curr_sum += a[r];
        if(curr_sum % x != 0) {
            len2 = max(len2, l - r + 1);
        }
    }
    if(len1 == 0 && len2 == 0) {
        cout << -1 << endl;
        return;
    }
    cout << max(len1, len2) << endl;
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