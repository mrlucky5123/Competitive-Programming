#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, a, b, c; cin >> n >> a >> b >> c;

    vector<ll> dp(n+1, -1);
    dp[0] = 0;

    for(ll i = 1; i <= n; i++) {
        if(i >= a && dp[i-a] != -1) dp[i] = max(dp[i], dp[i-a] + 1);
        if(i >= b && dp[i-b] != -1) dp[i] = max(dp[i], dp[i-b] + 1);
        if(i >= c && dp[i-c] != -1) dp[i] = max(dp[i], dp[i-c] + 1);
    }
    cout << dp[n] << endl;
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