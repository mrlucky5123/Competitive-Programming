#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k; 
    vector<ll> a(n);
    for(auto& x : a) cin >> x;

    ll mn = *min_element(a.begin(), a.end());

    sort(a.rbegin(), a.rend());
    
    vector<ll> final;
    final.push_back(a[n-1]);
    for(ll i = 0; i < n-1; i++) final.push_back(a[i]);

    for(auto& i : final) cout << i << " ";
    cout << endl;
    for(ll i = 2; i < n; i++) {
        if(!(i&1)) {
            // dabir chance 
            if(final[i]-final[i-1] <= k && (final[i]-final[i-1]) >= 0) continue;
            else {
                cout << "YES" << endl;
                return;
            }
        } else {
            // egor chance
            if(final[i]-final[i-1] <= k && (final[i]-final[i-1]) >= 0) continue;
            else {
                cout << "NO" << endl;
                return;
            }
        }
    }
    if(n&1) cout << "NO" << endl;
    else cout << "YES" << endl;
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