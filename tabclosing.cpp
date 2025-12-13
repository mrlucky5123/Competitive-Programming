#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll a, b, n; cin >> a >> b >> n;

    // min(b, a / m);
    // at start if b is less, we will will start and try check how many times b is changed to not less
    ll ans = 1, m = n,  init_left = b,  init_right = a / m;
    ll start = 0;

    ll len = min(init_left, init_right);
    ll start = len;
    while(n > 0) {
        

        n--;
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