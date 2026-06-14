#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<pair<ll,ll>> a(n+1);
    for(ll i = 1; i <= n; i++) {
        ll x; cin >> x;
        a[i] = {x, i};
    }
    sort(a.begin()+1, a.end());

    ll l = 1, r = n;
    while(l < r) {
        cout << a[l].second << " " << a[r].second << endl;
        l++, r--;
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