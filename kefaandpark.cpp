#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

vector<ll> has_cat;
vector<vector<ll>> adj_list;

ll dfs(ll node, ll parent, ll curr_streak, ll m) {
    if(has_cat[node]) curr_streak++;
    else curr_streak = 0;

    if(curr_streak > m) return 0;

    bool leaf = true;
    ll val_route = 0;

    for(ll child : adj_list[node]) {
        if(child != parent) {
            leaf = false;
            val_route += dfs(child, node, curr_streak, m);
        }
    }
    if(leaf) return 1;
    return val_route;
}

void solve() {
    ll n, m; cin >> n >> m;
    has_cat.resize(n+1);
    adj_list.resize(n+1);

    for(ll i = 1; i <= n; i++) cin >> has_cat[i];
    for(ll i = 0; i < n-1; i++) {
        ll x, y; cin >> x >> y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    ll ans = dfs(1, -1, 0, m); // dfs(current node, parent node, current streak, max allowed streak)
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