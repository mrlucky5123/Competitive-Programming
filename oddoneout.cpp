#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll a, b, c; cin >> a >> b >> c;
//     cout << (a ^ b ^c) << endl;
// }

void solve() {
    map<ll, ll> freq;
    for(ll i = 0; i < 3; i++) {
        int x; cin >> x;
        freq[x]++;
    }
    for(auto& i : freq) {
        if(i.second == 1) {
            cout << i.first << endl;
            return;
        }
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