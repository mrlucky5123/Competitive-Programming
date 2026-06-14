#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    ll mn = *min_element(a.begin(), a.end());
    ll mx = *max_element(a.begin(), a.end());

    ll ans = mx - mn + 1; 
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