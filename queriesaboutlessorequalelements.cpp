#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, m; cin >> n >> m;
    vector<ll> a(n), b(m);
    for(auto& i : a) cin >> i;
    for(auto& i : b) cin >> i;

    sort(a.begin(), a.end());
    for(auto& i : b) {
        ll pos = upper_bound(a.begin(), a.end(), i) - a.begin();
        cout << pos << " ";
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