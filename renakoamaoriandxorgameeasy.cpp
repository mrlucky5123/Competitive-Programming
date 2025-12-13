#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n+1), b(n+1);
    ll curr_xor_a = 0;
    ll curr_xor_b = 0;
    bool all_same_a = true;
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
    }
    // for(ll i = 1; i <= n; i++) {
    //   if(a[i] == 0) all_same_a = false;
    // }

    for(ll i = 1; i <= n; i++) {
        cin >> b[i];
    }
    // bool all_same_b = true;
    // for(ll i = 1; i <= n; i++) {
    //   if(b[i] == 0) all_same_b = false;
    // }
    for(ll i = 1; i <= n; i++) {
        curr_xor_a ^= a[i];
        curr_xor_b ^= b[i];
    }
    
    if(curr_xor_b == 1 && curr_xor_a == 1) {
      cout << "Tie" << endl;
      return;
    }
    for(ll i = 1; i <= n; i++) {
        if(a[i] == b[i]) continue;
        if(i % 2 == 1 && curr_xor_a == 0) {
            curr_xor_a = 1;
        } else if(i % 2 == 1 && curr_xor_a == 1) continue;
        else if(i % 2 == 0 && curr_xor_b == 0) {
            curr_xor_b = 1;
        } else if(i % 2 == 0 && curr_xor_b == 1) continue;
    }

    if(curr_xor_a > curr_xor_b) {
        cout << "Ajisai"  << endl;
    } else {
        cout << "Mai" << endl;
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