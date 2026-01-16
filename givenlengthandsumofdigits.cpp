#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll m, s; cin >> m >> s;

    // impossible case
    if((m > 1 && s == 0) || s > 9*m) {
        cout << -1 << " " << -1 << endl;
        return;
    }

    vector<ll> small(m, 0), large(m, 0);

    //large 
    ll rem = s;
    for(ll i = 0; i < m; i++) {
        large[i] = min(9LL, rem);
        rem -= large[i];
    }

    // small : set first digit to 1, distribute rest from right 
    rem = s - 1;
    small[0] = 1;
    for(ll i = m - 1; i >= 1; i--) {
        small[i] = min(9LL, rem);
        rem -= small[i];
    }
    small[0] += rem; // leftovers

    //output small and large 
    for(auto i : small) {
        cout << i ;
    }
    cout << " ";
    for(auto i : large) {
        cout << i;
    }
    cout << endl;
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