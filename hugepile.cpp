#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

ll ans;

void dfs(ll x, ll k, ll steps, unordered_map<ll,ll>& memo) {
    if(x==k) {
        ans = min(ans, steps);
        return;
    }
    if(x < k) return;

    if(memo.count(x) && memo[x] <= steps) return;
    memo[x] = steps;

    ll num1 = x / 2;
    ll num2 = (x + 1) / 2;

    dfs(num1, k, steps+1, memo);
    dfs(num2, k, steps+1, memo);
}

void solve() {
    ll n, k;
    cin >> n >> k;

    if(k==n) {
        cout << 0 << endl;
        return;
    }

    ans = 1e9;
    unordered_map<ll,ll> memo;

    dfs(n, k, 0, memo);

    if(ans == 1e9){
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }

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