#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m, p, q;
    cin >> n >> m >> p >> q;

    if (n == m  && m == p && p == q) {
        cout << "YES" << endl;
        return;
    }

    if(p == 1) {
        cout << (m == n*q ? "YES" : "NO") << endl;
        return;
    }

    if(p == n) {
        if(m == q) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    if(n % p == 0) {
        if(m == (n / p)* q) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "YES" << endl;
    }
    
    if(q*(n - p + 1) != m) {
        cout << "NO" << endl;
        return;
    } else {
        cout << "YES" << endl;
        return;
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