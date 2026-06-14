#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> q(n);
    for(auto& x : q) cin >> x;
    sort(q.begin(), q.end());

    ll ans = 0;
    ll time_spent = 0;
    for(ll i = 0; i < n; i++) {
        
        if(time_spent <= q[i]) {
            time_spent += q[i];
            ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}