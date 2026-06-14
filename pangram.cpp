#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    string s; cin >> s;

    // vector<ll> freq(26, 0);
    map<char, ll> freq(26, 0);
    for(ll i = 0; i < s.size(); i++) {
        freq[s[i]]++;
    }

    for(ll i = 0; i < 26; i++) {
        if(freq[i] == 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}