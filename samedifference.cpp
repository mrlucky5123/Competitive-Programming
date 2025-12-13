#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    char c = s[n-1];
    ll ans = 0;
    for(ll i = n - 2; i >= 0; i--) {
        if(s[i] != c) {
            ans++;
        }
    }
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