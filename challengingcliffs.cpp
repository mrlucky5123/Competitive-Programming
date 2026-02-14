#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    for(auto& i : a) cin >> i;
    
    sort(a.begin(), a.end());
    if(n == 2) {
        cout << a[0] << " " << a[1] << endl;
        return;
    }
    ll min_diff = LLONG_MAX;
    ll k = -1;
    for(ll i = 1; i < n; i++) {
        if(a[i] - a[i-1] < min_diff) {
            min_diff = a[i] - a[i-1];
            k = i-1;
        }
    }
    for(ll i = k+1; i < n; i++) {
        cout << a[i] << " ";
    }
    for(ll i = 0; i <= k; i++) {
        cout << a[i] << " ";
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