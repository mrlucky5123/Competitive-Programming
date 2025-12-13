#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;
    if(x != 1) {
        cout << "YES" << endl;
        cout << n << endl;
        for(int i = 1; i <= n; i++) {
            cout << 1 << " ";
        }
        cout << endl;
    } else if(k == 1 || (k == 2 && n % 2 == 1)) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        int m = n/2; 
        cout << m << endl;
        if(n % 2 == 1) {
            cout << 3;
            for(int i = 1; i < m; i++) {
                cout << " 2";
            }
        } else {
            for(int i = 0; i < m; i++) {
                cout << 2 << " ";
            }
        }
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