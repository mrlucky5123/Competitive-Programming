#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

const ll MAX = 1e5 + 5;

void solve() {
    vector<ll> freq(MAX, 0);

    for(ll i = 0; i < n; i++) {
        ll x; cin >> x;
        freq[x]++;
    }

    ll prev0 = 0, prev1 = 0;

    for(ll i = 1; i < MAX; i++) {
        ll weight = freq[i]*1LL*i;

        ll curr0 = max(prev0, prev1);
        ll curr1 = prev0 + weight;

        prev0 = curr0;
        prev1 = curr1;
    }
    cout << max(prev0, prev1) << endl;
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