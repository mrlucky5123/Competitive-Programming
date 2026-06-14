#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    multiset<ll> ms;
    ll l = 0, ans = 0;

    for(ll r = 0; r < n; r++) {
        ms.insert(a[r]);
        while(*ms.rbegin() - *ms.begin() > k) {
            ms.erase(ms.find(a[l]));
            l++;
        }
        ans += r - l + 1;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}