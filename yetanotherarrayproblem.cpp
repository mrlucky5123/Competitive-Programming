#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto & it : a) cin >> it;
    // ll mini = *min_element(a.begin(), a.end());

    // for(ll i = 2; i < mini; i++) {
    //     if(__gcd(i, mini) == 1) {
    //         cout << i << endl;
    //     }
    // }
    // cout << mini + 1 << endl;

    for(ll i = 2; i <= 100; i++) {
        bool found = false; 
        for(ll j = 0; j < n; j++) {
            if(__gcd(a[j], i) == 1) {
                cout << i << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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