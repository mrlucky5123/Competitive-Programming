#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    if(k == n) {
        cout << "NO" << endl;
    } else if (m * (n - k - 1) >= n) {
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