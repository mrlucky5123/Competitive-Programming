#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; 
    n = 3;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;
    sort(a.begin(), a.end());

    ll ans = 0;

    // ans = ans + abs(a[1]-a[0]) + abs(a[2]-a[1]);
    ans += abs(a[2]-a[0]);
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