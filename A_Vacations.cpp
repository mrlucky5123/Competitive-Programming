#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// Iterative version

// void solve() {
//     ll n; cin >> n; 
//     vector<ll> a(n+1);
//     for(ll i = 1; i <= n; i++) cin >> a[i];

//     const ll INF = 1e18;

//     vector<vector<ll>> dp(n+1, vector<ll> (3, INF));

//     dp[0][0] = 0; //rest
//     dp[0][1] = INF; // contest
//     dp[0][2] = INF; // gym 

//     for(ll i = 1; i <= n; i++) {

//         //rest 
//         dp[i][0] = min({dp[i-1][0], dp[i-1][1], dp[i-1][2]}) + 1;

//         //contest
//         if(a[i] == 1 || a[i] == 3) {
//             dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
//         }

//         //gym
//         if(a[i] == 2 || a[i] == 3) {
//             dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
//         }
//     }

//     cout << min({dp[n][0], dp[n][1], dp[n][2]}) << endl;
// }

// Recursive version 

ll n; vector<ll> a;
vector<vector<ll>> dp;

ll minRest(ll i, ll last) {
    if(i > n) return 0;

    if(dp[i][last] != -1) return dp[i][last];

    ll ans = LLONG_MAX;

    // rest 
    ans = min(ans, 1 + minRest(i+1, 0));

    //contest 
    if((a[i] == 1 || a[i] == 3) && last != 1) {
        ans = min(ans, minRest(i+1, 1));
    }

    //gym
    if((a[i] == 2 || a[i] == 3) && last != 2) {
        ans = min(ans, minRest(i+1, 2));
    }
    return dp[i][last] = ans;
}

void solve() {
    cin >> n; 
    a.resize(n+1);
    for(ll i = 1; i <= n; i++) cin >> a[i];

    dp.assign(n+1, vector<ll> (3, -1));
    cout << minRest(1, 0) << endl;
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