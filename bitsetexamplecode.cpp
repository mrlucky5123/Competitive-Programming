#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    bitset<40> b1; // b1[i] = 0--> this says that ith worker does not work for the company A
    bitset<40> b2;
    
    ll n, m; cin >> n >> m;
    for(ll i = 0; i < n; i++) {
      ll x ; cin >> x;
      b1[x] = 1;
    }
    for(ll i = 0; i < m; i++) {
      ll x ; cin >> x;
      b2[x] = 1;
    }
    
    bitset<40> b3;
    b3 = (b1&b2);
    cout << b3.count() << endl;
}

// Input:
// 5 5
// 4 5 2 1 3
// 2 5 6 10 4

// Output:
// 3

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