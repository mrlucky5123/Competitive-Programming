#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) {
        cin >> i;
    }

    set<ll> s(a.begin(), a.end());
    vector<ll> v(s.begin(), s.end());

    ll ans = 0;
    if(!v.empty()) {
        ans = 1;
        ll cur = 1;
        for(ll i = 1; i < (ll)v.size(); i++) {
            if(v[i] == v[i-1] + 1) {
                cur++;
            } else {
                ans = max(ans, cur);
                cur = 1;
            }
        }
        ans = max(ans, cur);
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