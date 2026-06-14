#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n, k; cin >> n >> k;
//     string s; cin >> s;

//     vector<ll> ans;
//     ll best = LLONG_MAX;

//     for(ll x = 0; x <= k; x++) {
//         ll xx = x;
//         ll yy = k-x;

//         string a;
//         vector<ll> cur(n);

//         for(ll i = n - 1; i >= 0; i--) {
//             if(s[i] == ')' && yy) {
//                 cur[i] = 1;
//                 yy--;
//             }
//         }
//         for(ll i = 0; i < n; i++) {
//             if(s[i] == '(' && xx) {
//                 cur[i] = 1;
//                 xx--;
//             }
//         }

//         for(ll i = 0; i < n; i++) {
//             if(cur[i] == 0) a += s[i];
//         }
//         // cout << a << endl;

//         ll bal = 0, currans = 0;
//         for(auto& x : a) {
//             if(x == '(') bal++;
//             else {
//                 if(bal) {
//                     bal--;
//                     currans++;
//                 }
//             }
//         }
//         if(currans < best) {
//             best = currans;
//             ans = cur;
//         }
//     }
//     for(auto& x : ans) cout << x;
//     cout << endl;
// }

void solve() {
    ll n, k; cin >> n >> k;
    string s; cin >> s;

    vector<ll> bal(n+1, 0);

    for(ll i = 1; i <= n; i++) {
        if(s[i-1] == '(') bal[i] = bal[i-1] + 1;
        else bal[i] = bal[i-1] - 1;
    } 

    ll p = min_element(bal.begin(), bal.end()) - bal.begin();

    string ans(n, '0');

    for(ll i = 0; i < n && k > 0; i++) {
        if(i < p && s[i] == '(') {
            ans[i] = '1';
            k--;
        } else if(i >= p && s[i] == ')') {
            ans[i] = '1';
            k--;
        }
    }
    cout << ans << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}