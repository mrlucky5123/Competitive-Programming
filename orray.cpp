#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    vector<ll> vis(n, 0);
    vector<ll> ans;

    ll mask = 0, index = 0;
    for(ll iter = 30; iter >= 0; iter--) {
        ll maxmask = mask;
        ll index = -1;
        for(ll i = 0; i < n; i++) {
            if(!vis[i] && ((a[i] | mask) > maxmask)) {
                maxmask = a[i] | mask;
                index = i;
            }
        }
        if(index == -1) break;

        vis[index] = 1;
        ans.push_back(a[index]);
        mask |= maxmask;
    } 

    for(ll i = 0; i < n; i++) if(!vis[i]) ans.push_back(a[i]);
    for(ll i = 0; i < n; i++) cout << ans[i] << " ";
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