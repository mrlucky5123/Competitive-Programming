#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    for(auto& i : a) cin >> i;
    vector<ll> type(n);
    bool one = false, zero = false;
    for(auto& i : type) {
        cin >> i;
        if(i == 0) zero = true;
        if(i == 1) one = true;
    }
    if(is_sorted(a.begin(), a.end())) {
        cout << "YES" << endl;
        return;
    }
    if(one && zero) {
        cout << "YES" << endl;
    } else cout << "NO" << endl;
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