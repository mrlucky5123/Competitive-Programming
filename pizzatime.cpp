#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    
    ll ans = 0;
    ll n1 = 0, n2 = 0;
    while(n > 2) {
        ans += n / 3;
        n1 = ((n - ans) + 1) / 2;
        n2 = ((n - ans) + 1) / 2;
        if(n2 > 2) {
            n = n2;
        } else break;
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