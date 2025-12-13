#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll x, y, z; cin >> x >> y >> z;

    ll a = 0, b = 0, c = 0;
    for(ll i = 0; i < 30; i++) {
        if((x >> i) & 1) {
            a |= (1 << i);
            b |= (1 << i);
        }
        if((y >> i) & 1) {
            b |= (1 << i);
            c |= (1 << i);
        }
        if((z >> i) & 1) {
            a |= (1 << i);
            c |= (1 << i);
        }
    }

    if((a&b) == x && (b&c) == y && (c&a) == z) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
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