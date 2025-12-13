#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    for(ll mask = 0; mask < (1 << n); mask++) {
        for(ll i = 0; i < n; i++) {
            if(mask & (1 << i)) {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
}

// T.C := O(n * 2 ^ n)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}