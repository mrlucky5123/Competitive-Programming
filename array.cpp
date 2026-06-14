#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    
    for(ll i = 0; i < n-1; i++) {
        ll count_less = 0, count_greater = 0;
        for(ll j = i+1; j < n; j++) {
            if(a[j] < a[i]) count_less++;
            if(a[j] > a[i]) count_greater++;
            // if(a[j] == a[i]) continue;
        }
        cout << max(count_less, count_greater) << " ";
    }
    cout << 0 << endl;
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