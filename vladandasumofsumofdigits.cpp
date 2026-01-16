#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;


//1. precomputation of array till 2e5 + 5
// const ll N = 2e5+5;
// ll prefix[N];

// ll digit_sum(ll x) {
//     ll sum = 0;
//     while(x > 0) {
//         sum += x % 10;
//         x /= 10;
//     }
//     return sum;
// }

// void solve() {
//     ll n; cin >> n; 
//     cout << prefix[n] << endl;
// }

const ll N = 2e5 + 5;
ll dp[N], prefix[N];

void precompute() {
    //base case
    dp[0] = 0;

    for(ll i = 1; i < N; i++) {
        dp[i] = dp[i / 10] + (i % 10);
    }

    // prefix sums 
    prefix[0] = 0;
    for(ll i = 1; i < N; i++) {
        prefix[i] = prefix[i-1] + dp[i];
    }
}

void solve() {
    ll n; cin >> n; 
    cout << prefix[n] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();
    
    // prefix[0];
    // for(ll i = 1; i < N; i++) {
    //     prefix[i] = prefix[i-1] + digit_sum(i);
    // }

    long long t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}