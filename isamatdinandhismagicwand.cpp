#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    bool possible = true;
    bool odd = false;
    bool even = false;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] & 1) odd = true;
        if(!(a[i] & 1)) even = true;
    }

    if(odd && even) {
        sort(a.begin(), a.end());
        for(ll i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    else {
        for(ll i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
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