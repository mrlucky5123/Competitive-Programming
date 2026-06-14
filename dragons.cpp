#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll s, n; cin >> s >> n;
    vector<pair<ll,ll>> strength_bonus(n);
    for(ll i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        strength_bonus[i].first = x;
        strength_bonus[i].second = y;
    }

    sort(strength_bonus.begin(), strength_bonus.end());

    ll curr_strength = s;
    // ll dragons = n;
    for(ll i = 0; i < n; i++) {
        if(curr_strength > strength_bonus[i].first) {
            curr_strength += strength_bonus[i].second;
        } else {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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