#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    ll count = 1, ans = 1;
    for(ll i = 0; i < n - 1; i++) {
        if(a[i] < a[i+1]) count++;
        else {
            ans = max(count, ans);
            count = 1;
        }
    }

    // Whenever you track a running streak inside a loop,always update the answer one final time after the loop.
    // The last streak never hits the else branch.
    ans = max(count,ans); // never forget this.
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