#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// Recursive approach
// ll sequencelength(ll n) {
//     if(n == 1) return 1;
//     if(n&1) {
//         return sequencelength(3*n + 1) + 1;
//     } else {
//         return sequencelength(n/2) + 1;
//     }
// }

// recursive with vector
ll sequencelength(ll n, vector<ll>& seq) {
    seq.push_back(n);
    if(n == 1) {
        return seq.size();
    }
    if(n&1) return sequencelength(3*n+1, seq);
    else return sequencelength(n/2, seq);
}


// Iterative approach
// ll sequencelength(ll n) {
//     vector<ll> seq;
//     seq.push_back(n);
//     while(n != 1) {
//         if(n&1) {
//             n = 3*n + 1;
//         } else {
//             n = n/2;
//         }
//         seq.push_back(n);
//     }
//     return seq.size();
// }

void solve() {
    ll n; cin >> n;
    vector<ll> seq;
    ll ans = sequencelength(n, seq);
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}