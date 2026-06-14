#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    sort(a.begin(), a.end());
    ll q; cin >> q;
    while(q--) {
        ll m; cin >> m;
        auto it = upper_bound(a.begin(), a.end(), m);
        cout << it - a.begin() << endl;
    }
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