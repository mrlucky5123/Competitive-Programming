#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for(auto& i : a) {
        cin >> i;
        sum += i;
    }
    sort(a.begin(), a.end(), greater<ll>());
    // double half = (double)sum / 2;
    ll ans = 0;
    ll curr = 0;
    for(ll i = 0; i < n; i++) {
        // if(curr <= half) {
        if(2*curr <= sum) {
            curr += a[i];
            ans++;
        }
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

