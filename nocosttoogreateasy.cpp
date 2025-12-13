#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    ll even_cnt = 0;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0) {
            even_cnt++;
        }
    }
    for(ll i = 0; i < n; i++) cin >> b[i];

    if(even_cnt > 1) {
        cout << 0 << endl;
        return;
    }
    ll ans = 0;
    if(even_cnt == 1) {
        // sort(b.begin(), b.end());
        // ans += b[0];
        cout << ans + 1 << endl;
        return;
    }
    if(even_cnt == 0) {
        
        sort(a.begin(), a.end());
        if(a[0] != 1) {
            for(ll i = 1; i < n; i++) {
                a[i] += 1;
                if(__gcd(a[0],a[i]) > 1) {
                    cout << 1 << endl;
                    return;
                }
            }
        }
        
        cout << 2 << endl;
        return;
    }

    // vector<pair<ll,ll>> b_cost(n);
    // for(ll i = 0; i < n; i++) {
    //     b_cost[i].first = b[i];
    //     b_cost[i].second = a[i];
    // }
    // sort(b_cost.begin(), b_cost.end());
    // if(even_cnt == 0) {
    //     b_cost[0].second++;
    //     ans += b_cost[0].first;
    //     for(ll i = 1; i < n; i++){
    //         if(__gcd(b_cost[0].second, b_cost[i].second) > 1) {
    //             cout << ans << endl;
    //         } else {
    //             ans += b_cost[1].first;
    //             break;
    //         }
    //     }
    // }
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

