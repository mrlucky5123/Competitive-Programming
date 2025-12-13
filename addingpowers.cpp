#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    // for(ll i = n - 1; i >= 0; i--) {
    //     ll fact = (k >> i);
    //     if(a[i] == 0LL) continue;
    //     if(fact == 0LL) {
    //         cout << "NO" << endl;
    //         return;
    //     }
    //     if(a[i] % fact != 0LL) {
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }
    // cout << "YES" << endl;

    ll x = *max_element(a.begin(), a.end());
    ll maxpowk = 1;
    while(maxpowk < x) {
        maxpowk *= k;
    }

    bool ans = true;
    while(maxpowk > 0) {
        ll cnt = 0;
        for(ll i = 0; i < n; i++) {
            if(a[i] >= maxpowk) {
                a[i] -= maxpowk;
                cnt++;
            }
        }
        if(cnt > 1) {
            ans = false;
            break;
        }
        maxpowk /= k;
    }
    if(ans) {
        ll y = *max_element(a.begin(), a.end());
        if(y == 0) cout << "YES" << endl;
        else cout << "NO" << endl;  
    }else cout << "NO" << endl;
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