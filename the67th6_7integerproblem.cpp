#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n = 7;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    sort(a.begin(), a.end());

    ll sum = 0;
    for(ll i = 0; i < n - 1; i++) {
        sum += -a[i];
    }
    ll ans = a[n-1] + sum;
    // ll total = accumulate(a.begin(), a.end(), 0LL);

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