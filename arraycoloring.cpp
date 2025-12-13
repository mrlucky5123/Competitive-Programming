#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int odd_count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 != 0) {
            odd_count++;
        }
    }
    if(odd_count % 2 == 0) {
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