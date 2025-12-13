#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n+1, 0);
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<ll> l(m+1), r(m+1), d(m+1);
    for(ll i = 1; i <= m; i++) {
        cin >> l[i] >> r[i] >> d[i]; 
    }

    vector<ll> op_freq(m + 2, 0);
    for(ll i = 1; i <= k; i++) {
        ll x, y;
        cin >> x >> y;
        op_freq[x] += 1;
        op_freq[y+1] -= 1;
    }
    for(ll i = 1; i <= m; i++) {
        op_freq[i] += op_freq[i-1];
    }

    vector<ll> diff(n+2, 0);
    for(ll i = 1; i <= m; i++) {
        ll effe_d = op_freq[i]*d[i];
        diff[l[i]] += effe_d;
        diff[r[i] + 1] -= effe_d;
    }
    for(ll i = 1; i <= n; i++) {
        diff[i] += diff[i-1];
        a[i] += diff[i];
    }
    for(ll i = 1; i <= n; i++) cout << a[i] << " ";
    cout << endl;
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