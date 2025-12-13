#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    if(n % 2 == 1) {
        if(k % 2 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    if(n % 2 == 0) {
        cout << "YES" << endl;
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