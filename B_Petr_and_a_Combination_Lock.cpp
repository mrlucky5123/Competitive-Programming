#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

bool dfs(ll idx, ll angle, vector<ll> &a) {
    if(idx == a.size()) {
        return angle % 360 == 0;
    }
    return dfs(idx+1, angle + a[idx], a) || dfs(idx+1, angle - a[idx], a);
}

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    for(auto &x : a) cin >> x;

    if(dfs(0, 0, a)) {
        cout << "YES" << endl;
    } else cout << "NO" << endl;
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