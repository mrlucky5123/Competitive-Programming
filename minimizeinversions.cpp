#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<pair<ll,ll>> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i].first;
    for(ll i = 0; i < n; i++) cin >> a[i].second;

    sort(a.begin(), a.end());

    for(auto& i : a) cout << i.first << " ";
    cout << endl;
    for(auto& i : a) cout << i.second << " ";
    cout << endl;
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