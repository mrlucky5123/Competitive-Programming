#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k; 
    vector<int> a(n);

    bool ys = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == k) {
            ys = 1;
        }
    }
    if(ys) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t; // for reading the no. of test cases
    cin >> t;
    while (t--) {
        solve();
    }
}