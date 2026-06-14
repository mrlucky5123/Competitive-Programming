#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    map<ll, ll> freq;
    for(ll i = 0; i < n; i++) {
        ll x; cin >> x;
        freq[x]++;
    }

    ll mx = LLONG_MIN;
    for(auto it : freq) {
        mx = max(mx, it.second);
    }

    ll others = n - mx;
    if(mx > others) {
        cout << mx - (n-mx) << endl;
    } else cout << n % 2 << endl;
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