#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int u = d - b;
    int l = a + d - b - c;
    if(u < 0 || l < 0) {
        cout << -1 << endl;
    } else {
        cout << u + l << endl;
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