#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    ll type1 = 0, type2 = 0;
    for(ll i = 0; i < n; i++) {
        if(i%2 != 0 && a[i]%2 == 0) { //odd idx and even ele
            type1++;
        }
        if(i%2 == 0 && a[i]%2 != 0) {  // even idx and odd ele
            type2++;
        }
    }
    if(type1 != type2) cout << -1 << endl;
    else cout << type1 << endl;
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