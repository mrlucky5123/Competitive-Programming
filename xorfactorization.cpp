#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> ans(k);
    if(k&1) {
        for(ll i = 0; i < k; i++) {
            cout << n << " ";
        }
        cout << endl;
        return;
    } else {
        cout << 0 << " ";
        for(ll i = 0; i < k - 1; i++) {
            cout << n << " ";
        }
        cout << endl;
        return;
    }

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