#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        b[i] = n + 1 - a[i];
    }
    for(int i = 0; i < n; i++) {
        if(i > 0) cout << " ";
        cout << b[i];
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}