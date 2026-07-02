#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> u(n), s(n);
    
    for(auto& i : u) cin >> i;
    for(auto& i : s) cin >> i;
    
    vector<vector<ll>> uni(n+1);
    for(ll i = 0; i < n; i++) {
        uni[u[i]].push_back(s[i]);
    } 

    vector<ll> ans(n+1, 0);
    for(ll i = 1; i <= n; i++) {
        if(uni[i].empty()) continue;

        sort(uni[i].rbegin(), uni[i].rend());

        ll m = uni[i].size();

        vector<ll> pre(m+1, 0);
        for(ll j = 1; j <= m; j++) {
            pre[j] = pre[j-1] + uni[i][j-1];
        }

        for(ll k = 1; k <= m; k++) {
            ll usable = (m/k)*k;
            ans[k] += pre[usable];
        }
    }

    for(ll k = 1; k <= n; k++) {
        cout << ans[k] << " ";
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