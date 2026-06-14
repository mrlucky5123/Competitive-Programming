#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    vector<ll> maxSetBit(31, 0);

    for(ll i = 0; i < n; i++) {
        for(ll bit = 30; bit >= 0; bit--) {
            if(a[i] & (1 << bit)) {
                maxSetBit[bit]++;
                break;
            }
        }
    }

    ll ans = 0;
    for(ll bit = 0; bit <= 30; bit++) {
        if(maxSetBit[bit] > 0) {
            ans += (maxSetBit[bit] * (maxSetBit[bit] - 1)) / 2;
        }
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