#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    string s; cin >> s;
    ll n = s.size();
    bool AB = false, BA = false;
    for(ll i = 0; i < n-1; i++) {
        if(s[i] == 'A' && s[i+1] == 'B') {
            AB = true;
            i+=2;
        }
        if(AB && s[i] == 'B' && s[i+1] == 'A') {
            BA = true;
            cout << "YES" << endl;
            return;
        }
    }
    AB = false, BA = false;
    for(ll i = 0; i < n-1; i++) {
        if(s[i] == 'B' && s[i+1] == 'A') {
            BA = true;
            i+=2;
        }
        if(BA && s[i] == 'A' && s[i+1] == 'B') {
            AB = true;
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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