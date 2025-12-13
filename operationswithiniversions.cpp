#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;
    ll ans = 0;

    // set<ll> avail;
    // for(ll i = 0; i < n; i++) avail.insert(i);

    // for(ll i = 0; i < n; i++) {
    //     if(avail.find(i) == avail.end()) continue;

    //     auto it = avail.upper_bound(i);
    //     while(it != avail.end()) {
    //         ll j = *it;
    //         if(a[i] > a[j]) {
    //             ans++;
    //             avail.erase(j);
    //             break;
    //         }
    //         it++;
    //     }
    // }

    vector<ll> premax(n);
    premax[0] = a[0];
    for(ll i = 1; i < n; i++) {
        premax[i] = max(premax[i-1], a[i]);
    }
    for(ll i = 1; i < n; i++) {
        if(premax[i-1] > a[i]) {
            ans++;
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