#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<pair<ll, ll>> odd, even;
    for(ll i = 1; i <= n; i++) {
        ll x; cin >> x;
        if(x&1) odd.push_back({x, i});
        else even.push_back({x, i});
    }
    if(odd.size() == 1) {
        cout << odd[0].second << endl;
    } else {
        cout << even[0].second << endl;
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