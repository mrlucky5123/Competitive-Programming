#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n), b(n);

    for(auto& i : a) cin >> i;
    for(auto& i : b) cin >> i;
    
    vector<pair<ll,ll>> jodi(n);
    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        jodi.push_back({a[i], b[i]});
        if(b[i] == 1) {
            ans += a[i];
        }
    }

    ll left = 0, right = k - 1, sum = 0;
    while(left < n - 2) {
        ll curr_sum = 0;
        for(ll i = left; i < right; i++) {
            if(b[i] == 0) {
                curr_sum += a[i]; 
            }
        }
        sum = max(sum, curr_sum);
        left++;
        right++;
    }
    cout << ans + sum << endl;
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