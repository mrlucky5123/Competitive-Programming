#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    for(auto &x : a) cin >> x;

    //case 1: already sorted
    if(is_sorted(a.begin(), a.end())) {
        cout << 0 << endl;
        return;
    }

    // ll d = a[n-2] - a[n-1];
    // case 2: possibility case
    if(a[n-1] < a[n-2] || a[n-1] < 0) {
        cout << -1 << endl;
        return;
    } 

    cout << n - 2 << endl;
    
    for(ll i = 1; i <= n-2; i++) {
        cout << i << " " << n-1 << " " << n << endl;
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