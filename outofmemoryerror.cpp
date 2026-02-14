#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, m, h; cin >> n >> m >> h;

    vector<ll> a(n);
    vector<ll> orginal(n);

    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        orginal[i] = a[i];
    }

    for(ll i = 0; i < m; i++) {
        ll b, c; 
        cin >> b >> c;
        b--;

        a[b] += c;
        if(a[b] > h) {
            a = orginal;
        }
    }
    for(auto& i : a) {
        cout << i << " ";
    }
    cout << endl;
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