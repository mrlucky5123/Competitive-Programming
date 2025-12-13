#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    // string s = "";
    // while(n > 0) {
    //     s.push_back('0' + (n%2));
    //     n /= 2;
    // }
    // reverse(s.begin(), s.end());

    // ll k = s.size();
    // ll ans = 0;
    // for(ll i = 0; i < k; i++) {
    //     if(s[i] == '1') ans++;
    // }

    // cout << ans << endl;
    // cout << __builtin_popcount(n) << endl;

    ll cnt_bits = 0;
    // x < 1e9
    for(ll i = 0; i < 32; i++) {
        // 1 
        // 10
        // 100
        if(((1 << i) & n) > 0) cnt_bits++;
    }
    cout << cnt_bits << endl;
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