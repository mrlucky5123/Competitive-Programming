#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;


void solve() {
    // ll n; cin >> n;
    // vector<ll> a(n+1);
    // for(ll i = 1; i <= n; i++) {
    //     cin >> a[i];
    // }

    // vector<ll> pre_xor(n+1, 0);
    // vector<ll> suf_xor(n+2, 0);
    // for(ll i = 1; i <= n; i++) {
    //     pre_xor[i] = pre_xor[i-1] ^ a[i];
    // }
    // for(ll i = n; i >= 1; i--) {
    //     suf_xor[i] = suf_xor[i+1] ^ a[i];
    // }
    // for(ll i= 1; i <= n; i++) {
    //     cout << pre_xor[i] << endl;
    // }
    // for(ll i= 1; i <= n; i++) {
    //     cout << suf_xor[i] << endl;
    // }
    // cout << endl;

    ll n; cin >> n;
    vector<ll> a(n);
    ll x = 0;
    for(ll = 0; i < n; i++) {
        cin >> a[i];
        x ^= a[i];
    }

    if(x == 0) {
        cout << "YES" << endl;
        return;
    }

    ll pr = 0, pr_ind = -1;
    for(ll i = 0; i < n; i++) {
        pr ^= a[i];
        if(pr == x) {
            pr_ind = i;
            break;
        }
    }
    ll suf = 0, suf_ind = -1;
    for(ll i = n - 1; i >= 0; i--) {
        suf ^= a[i];
        if(suf == x) {
            suf_ind = i;
            break;
        }
    }
    if(pr_ind < suf_ind) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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