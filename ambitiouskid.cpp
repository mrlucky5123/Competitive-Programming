#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int min_ops = INT_MAX;
    for(int i = 0; i < n; i++) {
        int abs_val = abs(a[i]);
        if(abs_val < min_ops) {
            min_ops = abs_val;
        }
    }
    cout << min_ops << endl;
}

int main () {
    solve();
    return 0;
}