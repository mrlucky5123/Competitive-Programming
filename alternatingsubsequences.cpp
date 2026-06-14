#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;

    ll ans = 0;
    ll max_so_far = a[0];
    for(ll i = 1; i < n; i++) {
        //same sign 
        if((a[i] > 0 && max_so_far > 0) || (a[i] < 0 && max_so_far < 0)) {
            max_so_far = max(max_so_far, a[i]);
        } else {
            ans += max_so_far;
            max_so_far = a[i];
        }
    }
    ans += max_so_far;
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