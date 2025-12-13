#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum ^= a[i];
    }

    if(n % 2 == 0) {
        if(sum == 0) {
            cout << 0 << endl;
        } else {
            cout << -1 << endl;
        }
    } else {
        cout << sum << endl;
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