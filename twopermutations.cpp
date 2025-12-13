#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, a, b;
    cin >> n >> a >> b;
    if(a + b + 2 <= n || a == b && a == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}