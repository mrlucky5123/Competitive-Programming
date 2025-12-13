#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k, q;
    cin >> n >> k >> q;

    vector<ll> range(200001, 0);
    for(ll i = 0; i < n; i++) {
        ll l, r;
        cin >> l >> r;
        range[l]++;
        range[r+1]--;
    }
    for(ll i = 1; i <= 200000; i++) {
        range[i] += range[i-1];  
    }
    for(ll i = 1; i <= 200000; i++) {
        if(range[i] >= k) {
            range[i] = 1;
        } else {
            range[i] = 0;
        }
    }
    for(ll i = 1; i <= 200000; i++) {
        range[i] += range[i-1];
    }
    for(ll i = 0; i < q; i++) {
        ll l, r;
        cin >> l >> r;
        cout << range[r] - range[l-1] << endl;
    }
}

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


