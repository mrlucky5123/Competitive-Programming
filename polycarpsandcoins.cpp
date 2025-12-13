#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long c2 = n / 3;
    long long c1 = n - 2 * c2;

    long long c2_alt = c2 + 1;
    long long c1_alt = n - 2 * c2_alt;
    if (c1_alt >= 0 && abs(c1_alt - c2_alt) < abs(c1 - c2)) {
        c1 = c1_alt;
        c2 = c2_alt;
    }
    cout << c1 << " " << c2 << endl;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}