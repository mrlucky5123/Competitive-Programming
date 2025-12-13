#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 1; i <= n - 2; i++) { 
        for (int j = 1; j <= min(2LL, n - i - 1); j++) { 
            string a = s.substr(0, i);
            string b = s.substr(i, j);
            string c = s.substr(i + j);
            string ac = a + c;
            if (ac.find(b) != string::npos) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}