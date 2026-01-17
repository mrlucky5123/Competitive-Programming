#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// My failed implementation 
// void solve() {
//     ll n, k; cin >> n >> k;
//     string s; cin >> s;
//     vector<ll> freq(26,0);
//     for(ll i = 0; i < k; i++) {
//         char c; 
//         cin >> c;
//         freq[c]++;
//     }
    
//     ll left = 0, right = 0, count = 0;
//     ll ans = 0;
//     while(right < n) {
//         while(freq.find(s[left]) == freq.end()) {
//             left++;
//             continue;
//         }
//         count++;
//         if(freq.find(s[left] == freq.end())) {
//             ans = (count * (count + 1))/2;
//             count = 0;
//         }
//     }
// }

void solve() {
    ll n, k; cin >> n >> k;
    string s; cin >> s;

    vector<bool> good(26, false);
    for(ll i = 0; i < k; i++) {
        char c; cin >> c;
        good[c-'a'] = true;
    }

    ll ans = 0, len = 0;

    for(ll i = 0; i < n; i++) {
        if(good[s[i]-'a']) {
            len++;
        } else {
            ans += (len*(len+1))/2;
            len = 0;
        }
    }
    ans += (len*(len+1))/2;
    cout << ans << endl;
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