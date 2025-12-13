#include<bits/stdc++.h>
typedef long long ll;
#define endl '\n'
using namespace std;

// vector<ll> fibonacci_sequence(ll n) {
//     vector<ll> dp(n+1);
//     dp[0] = 0;
//     if(n > 0) dp[1] = 1;
//     for(ll i = 2; i <= n; i++) {
//         dp[i] = dp[i-1] + dp[i-2];
//     }
//     return dp;
// }
ll fib[12];

void solve() {
    ll n, m;
    cin >> n >> m;
    for(ll i = 0; i < m; i++) {
        ll arr[3];
        for(ll j = 0; j < 3; j++) {
            cin >> arr[j];
        }
        sort(arr, arr + 3);
        cout << (arr[0] >= fib[n] && arr[1] >= fib[n] && arr[2] >= fib[n+1]);
    }
    cout << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;

    // Precomputation of fibonacci numbers upto certain limit as per the problem 
    
    fib[1] = 1;
    fib[2] = 2;
    for(ll i = 3; i <= 11; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    while(t--) {
        solve();
    }
    return 0;
}