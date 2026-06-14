#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

ll minDigit(ll n) {
    ll minD = 9;
    while(n > 0) {
        minD = min(minD, n%10);
        n /= 10;
    }
    return minD;
}
ll maxDigit(ll n) {
    ll maxD = 0;
    while(n > 0) {
        maxD = max(maxD, n%10);
        n /= 10;
    }
    return maxD;
}

// void solve() {
//     ll a, k; cin >> a >> k;
//     vector<ll> v(k+1);
//     v[1] = a;
//     ll last_idx = -1;
//     for(ll i = 2; i <= k; i++) {
//         v[i] = v[i-1] + minDigit(v[i-1])*maxDigit(v[i-1]);
//         if(minDigit(v[i-1]) == 0) {
//             v[i] = v[i-1];
//             last_idx = i;
//             break;
//         }
//     }

//     cout << (k < last_idx ? v[k] : v[last_idx]) << endl;
// }

void solve() {
    ll a, k; cin >> a >> k;

    ll curr = a;
    for(ll i = 1; i < k; i++) {
        ll minD = minDigit(curr);
        if(minD == 0) break;
        
        ll maxD = maxDigit(curr);
        curr = curr + minD*maxD;
    }
    cout << curr << endl;
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