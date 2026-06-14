#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, x, y, z; cin >> n >> x >> y >> z;

    // ll no_ai = ceil(n, (x+y));

    ll no_ai = (n + (x + y) - 1)/(x+y);
    ll ai = 0;

    if(x*z >= n) {
        ai = (n + x - 1) / x;
    } else {
        ai = z + (n-x*z + x + 10*y - 1) / (x + 10*y);
    }

    cout << min(ai, no_ai) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}