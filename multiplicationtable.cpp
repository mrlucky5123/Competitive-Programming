// n by n ki matrix banao 
// elements fill kro usi hisaab se i * j k hisaab se 
// then ekh ans variable banao aur increment krte jao for x throughout the matrix


// i * j = x 
/*
for every i 
agar voh divible hai x se 

*/
// j = x / i 

#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// ll const maxn = 100005;
// vector<vector<ll>> matrix(maxn+1, vector<ll>(maxn+1));

// void precompute() {
//     for(ll i = 1; i <= maxn; i++) {
//         for(ll j = 1; j <= maxn; j++) {
//             matrix[i][j] = i * j;
//         }
//     }
// }


void solve() {
    ll n, x; cin >> n >> x;

    ll ans = 0;
    for(ll i = 1; i <= n; i++) {
        if(x % i == 0) {
            ll j = x / i;
            if(j <= n) ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // precompute();
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}