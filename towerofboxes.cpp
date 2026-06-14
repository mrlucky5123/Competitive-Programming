#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, m, d; cin >> n >> m >> d;

    if(m > d) {
        cout << n << endl;
        return;
    }

    ll max_height = d / m + 1;
    ll ans = (n + max_height - 1) / max_height;
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