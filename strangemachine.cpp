#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, q; cin >> n >> q;
    string s; cin >> s;
    bool b_present = false;
    for(ll i = 0; i < n; i++) {
        if(s[i] == 'B') {
            b_present = true;
            break;    
        }
    }
    while(q--) {
        ll x; cin >> x;
        if(!b_present) {
            cout << x << endl;
            continue;
        }
        ll i = 0;
        ll ans = 0;
        while(x != 0) {
            if(s[i] == 'B') {
                x /= 2;
                ans++;
            } else {
                x--;
                ans++;
            }
            i++;
            if(i >= s.size()) i = 0;
        }
        cout << ans << endl;
    }
}

// map<pair<ll,ll>,ll> memo;
// ll n;
// string s; 

// ll count_press(ll x, ll pos) {
//     if(x == 0) return 0;
    
//     pair<ll,ll> state = {x, pos};
//     if(memo.count(state)) return memo[state];
    
//     ll next_pos = (pos + 1) % n;
//     ll result;

//     if(s[pos] == 'B') {
//         result = 1 + count_press(x / 2, next_pos);
//     } else {
//         result = 1 + count_press(x - 1, next_pos);
//     }
//     return memo[state] = result;
// }

// void solve() {
//     ll q; cin >> n >> q;
//     cin >> s;
//     bool b_present = false;
//     for(ll i = 0; i < n; i++) {
//         if(s[i] == 'B') {
//             b_present = true;
//             break;    
//         }
//     }

//     memo.clear();

//     while(q--) {
//         ll x; cin >> x;
//         if(!b_present) {
//             cout << x << endl;
//             continue;
//         }
//         cout << count_press(x, 0) << endl;
//     }
// }

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