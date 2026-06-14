#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, d; cin >> n >> d;
    vector<pair<ll, ll>> a(n);
    for(auto& i : a) cin >> i.first >> i.second;

    sort(a.begin(), a.end());

    ll l = 0, ans = 0, sum = 0;
    for(ll r = 0; r < n; r++) {
        sum += a[r].second;
        while(a[r].first - a[l].first >= d) {
            sum -= a[l].second;
            l++;
        }
        ans = max(ans, sum);
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