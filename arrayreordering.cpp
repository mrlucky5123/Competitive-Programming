#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    sort(a.begin(), a.end(), [](ll x, ll y){
        return (x % 2 == 0) > (y % 2 == 0);
    });

    // sort(a.begin(), a.end(), [](ll x, ll y){
    //     if((x%2 == 0) != (y%2 == 0)) {
    //         return (x % 2 == 0) > (y % 2 == 0);
    //     }
    //     return x > y;
    // });


    ll ans = 0;
    for(ll i = 0; i < n-1; i++) {
        for(ll j = i + 1; j < n; j++) {
            if(__gcd(a[i], 2*a[j]) > 1) ans++;
        }
    }
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