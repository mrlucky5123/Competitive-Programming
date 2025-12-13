#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    string s, t;
    cin >> s >> t;
    vector<ll> freq_s(26,0);
    vector<ll> freq_t(26,0);
    
    for(char c : s) {
        freq_s[c - 'a']++;
    }
    for(char c : t) {
        freq_t[c - 'a']++;
    }

    for(ll i = 0; i < 26; i++) {
        if(freq_s[i] != freq_t[i]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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