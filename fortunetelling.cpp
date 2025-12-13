#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, x, y; cin >> n >> x >> y;
    vector<ll> a(n);
    ll cnt_odd = 0;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] & 1) cnt_odd++;
    }

    // bool f = 1;
    // // f == 0 --> f is odd
    // for(ll i = 0; i < n; i++) {
    //     if(a[i]&1) {
    //         f = (!f); 
    //         // f ^= 1;
    //     }
    // }
    // // if we start with the odd number we end at the number same as parity as f 
    // if(x&1) {
    //     if(!((f^y) & 1LL)) {
    //         cout << "Alice" << endl;
    //     } else {
    //         cout << "Bob" << endl;
    //     }
    // } else {
    //     if(!((f^y) & 1LL)) {
    //         cout << "Bob" << endl;
    //     } else {
    //         cout << "Alice" << endl;
    //     }
    // }

    // ll sum = accumulate(a.begin(), a.end(), 0LL);
    // if(!((sum + x + y)&1)){
    //     cout << "Alice" << endl;
    // }else {
    //     cout << "Bob" << endl;
    // } // most efficient one.

    // if(x&1) {
    //     if(!(cnt_odd&1LL) && (y&1LL)) {
    //         cout << "Alice " << endl;
    //     } else {
    //         cout << "Bob" << endl;
    //     }
    // } else {
    //     if(!(cnt_odd&1LL) && (y&1LL)) {
    //         cout << "Bob" << endl;
    //     } else {
    //         cout << "Alice" << endl;
    //     }
    // }  // failed approach 

    ll alice_start, bob_start;
    alice_start = x % 2;
    bob_start = 1 - alice_start;

    ll alice_end, bob_end;
    if(!(cnt_odd&1LL)) {
        alice_end = alice_start;
        bob_end = bob_start;
    } else {
        alice_end = 1 - alice_start;
        bob_end = 1 - bob_start;
    }

    if((y&1LL) == alice_end) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
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