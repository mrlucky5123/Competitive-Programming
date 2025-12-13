#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, q;
    cin >> n >> q;

    string s; cin >> s;
    
    ll ans = 0;
    while(q--) {
        ll x; cin >> x;
        ll i = 0;
        while(x != 0) {
            if(s[i] == 'B') {
                x /= 2;
                ans++;
            } else {
                x--;
                ans++;
            }
            i++;
            if(i > s.size()) {
                i = 0;
            }
        }
    }

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