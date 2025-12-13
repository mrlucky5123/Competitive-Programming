#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_perfect_square(ll n) {
    ll s = sqrt(n);
    return s * s == n;
}

bool squareispossible(ll l1, ll b1, ll l2, ll b2, ll l3, ll b3) {
    ll total_area = l1 * b1 + l2 * b2 + l3 * b3;
    ll s = sqrt(total_area);
    if (s * s != total_area) {
        return false;
    }
    if (s < max({l1, b1, l2, b2, l3, b3})) {
        return false;
    }

    if (l1 == l2 && l2 == l3) {
        if (l1 == s && b1 + b2 + b3 == s) {
            return true;
        }
    }

    if (b1 == b2 && b2 == b3) {
        if (b1 == s && l1 + l2 + l3 == s) {
            return true;
        }
    }

    if (l2 == l3 && b1 == s) {
        if (b2 + b3 == s && l1 <= s) {
            return true;
        }
    }

    if (l1 == l2 && b3 == s) {
        if (b1 + b2 == s && l3 <= s) {
            return true;
        }
    }

    if (b2 == b3 && l1 == s) {
        if (l2 + l3 == s && b1 <= s) {
            return true;
        }
    }
    if (l2 == l3 && b1 == s) {
        if (b2 + b3 == s && l1 <= s) {
            return true;
        }
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        cout << (squareispossible(l1, b1, l2, b2, l3, b3) ? "YES" : "NO") << '\n';
    }

    return 0;
}
