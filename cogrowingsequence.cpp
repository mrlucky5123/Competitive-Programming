#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    // to store the require bits in needed vector
    vector<ll> needed(n, 0);

    // check bit by bit, what is the first index at which it occurs
    for(ll j = 0; j < 30; j++) {
        bool found = false;
        for(ll i = 0; i < n; i++) {
            if((a[i]&(1<<j)) && found == 0) {
                found = true;
            } else if(found && (a[i]&(1<<j)) == 0) {
                needed[i] += (1<<j);
            }
        }
    }
    for(auto& x : needed) {
        cout << x << " ";
    }
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