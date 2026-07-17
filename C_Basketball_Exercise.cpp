#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> top(n), bottom(n);
    for(auto &x : top) cin >> x;
    for(auto &x : bottom) cin >> x;

    ll BestTop = 0, BestBottom = 0;

    for(ll i = 0; i < n; i++) {

        ll currTop = top[i] + BestBottom;
        ll currBottom = bottom[i] + BestTop;

        BestTop = max(BestTop, currTop);
        BestBottom = max(BestBottom, currBottom);
    }
    cout << max(BestTop, BestBottom) << endl;
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