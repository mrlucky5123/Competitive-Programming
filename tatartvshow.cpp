#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n, k; cin >> n >> k;
//     string s; cin >> s;

//     for(ll i = 0; i < k; i++) {
//         ll cnt = 0;

//         for(ll j = i; j < n; j += k) {
//             if(s[j] == '1') cnt++;
//         }

//         if(cnt % 2 != 0) {
//             cout << "NO" << endl;
//             return;
//         }
//     }

//     cout << "YES" << endl;
// }

void solve() {
    ll n, k; cin >> n >> k;
    string s; cin >> s;

    for(ll i = 0; i < n; i++) {
        // if(i+k >= n) break;
        if(s[i]=='0') continue;
        if(s[i]=='1' && i+k < n){
            s[i] = 0;
            // s[i+k] ^= 1; 
            if(s[i+k] == '0'){
                s[i+k] = '1';
            }else s[i+k] = '0';
        }
    }

    bool ans = true; 
    for(auto& c : s) {
        if(c == '1') ans = false;
    }

    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin >> t;
    while(t--) solve();
}