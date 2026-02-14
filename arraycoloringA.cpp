#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<pair<ll,ll>> a(n);
    for(ll i = 0; i < n; i++) {
        ll x; cin >> x;
        a[i].first = x;
        if(i&1) a[i].second = 0;
        else a[i].second = 1;
    }

    sort(a.begin(), a.end());

    for(ll i = 1; i < n; i++) {
        if(a[i].second == a[i-1].second) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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