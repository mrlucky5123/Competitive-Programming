#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll ans = 0;
    ll last = LLONG_MIN;  
    for (ll i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (i - last > k - 1) {
                ans++;
            }
            last = i;
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