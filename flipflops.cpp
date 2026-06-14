#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, c, k; cin >> n >> c >> k;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    sort(a.begin(), a.end());

    for(ll i = 0; i < n; i++) {
        if(a[i] <= c){
            ll used = min(c - a[i], k);
            k -= used;
            c = c + a[i] + used;
        } else break;
    }
    
    cout << c << endl;
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