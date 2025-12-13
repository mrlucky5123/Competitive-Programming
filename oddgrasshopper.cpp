#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long x, n;
    cin >> x >> n;
    if(n == 0) {
        cout << x << endl;
        return;
    }
    long long ans = 0;
    if(n % 4 == 0) {
        ans == 0;
    } else if(n % 4 == 1) {
        ans = n*(-1);
    } else if(n % 4 == 2) {
        ans = 1;
    } else if(n % 4 == 3) {
        ans = n + 1;
    }

    if(x % 2 == 0) {
        cout << ans + x << endl;
    } else {
        cout << x - ans << endl;
    }
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}