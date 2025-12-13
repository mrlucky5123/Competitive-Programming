#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int minus_count = 0;
    int plus_count = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == -1)
            minus_count++;
        else
            plus_count++;
    }
    int operations = 0;
    if(minus_count == 0) {
        cout << 0 << endl;
        return;
    }
    while(plus_count < minus_count || minus_count % 2 == 1) {
        operations++;
        plus_count++;
        minus_count--;
    }
    cout << operations << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}