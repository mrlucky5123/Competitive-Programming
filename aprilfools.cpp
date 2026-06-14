#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll a, b, c; cin >> a >> b >> c;
    ll x = a^b^c;
    ll median = (a+b+c - max({a, b, c}) - min({a, b, c}));
    cout << x - median << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}