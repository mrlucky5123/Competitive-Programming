#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    ll gcd1 = 0, gcd2 = 0;
    for(ll i = 0; i < n; i++) {
        if(i&1) gcd2 = __gcd(gcd2, a[i]);
        else gcd1 = __gcd(gcd1, a[i]);
    }
    bool flag = true;
    for(ll i = 1; i < n; i+=2) {
        if(a[i] % gcd1 == 0) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout << gcd1 << endl;
        return;
    }
    flag = true;
    for(ll i = 0; i < n; i+=2) {
        if(a[i] % gcd2 == 0) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout << gcd2 << endl;
        return;
    } else {
        cout << 0 << endl;
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