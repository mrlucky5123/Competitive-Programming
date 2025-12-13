#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;

    ll bits = __builtin_popcount(n);

    if(bits > k || k > n) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    multiset<ll> powers;
    for(ll i = 0; i <= 30; i++) {
        if(n & (1 << i)) {
            powers.insert(i);
        }
    }

    while(powers.size() < k) {
        auto it = powers.rbegin();
        ll largest = *it;

        powers.erase(powers.find(largest));
        
        powers.insert(largest - 1);
        powers.insert(largest - 1);
    }

    for(auto exp : powers) {
        cout << (1 << exp) << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}