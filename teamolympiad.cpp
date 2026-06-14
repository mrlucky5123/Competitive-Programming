#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<pair<ll,ll>> one, two, three;

    for(ll i = 1; i <= n; i++) {
        ll x; cin >> x;
        if(x == 1) {
            one.push_back({i, x});
        } else if(x == 2) {
            two.push_back({i, x});
        } else {
            three.push_back({i, x});
        }
    }

    ll cnt1 = one.size();
    ll cnt2 = two.size();
    ll cnt3 = three.size();

    if(cnt1*cnt2*cnt3 == 0) {
        cout << 0 << endl;
        return;
    }

    cout << min({cnt1, cnt2, cnt3}) << endl;
    for(ll i = 0; i < min({cnt1, cnt2, cnt3}); i++) {
        cout << one[i].first << " " << two[i].first << " " << three[i].first << endl;
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