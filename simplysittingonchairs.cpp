#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n+1);
    for(ll i = 1; i <= n; i++) cin >> a[i];

    vector<ll> vis(n+1, 0);
    ll count = 0;

    for(ll i = 1; i <= n; i++) {
        if(vis[i]) break;
        if(a[i] <= i) {
            vis[a[i]] = 1;
            count++;
        }
    }
    cout << count << endl;
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