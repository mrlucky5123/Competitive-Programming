#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector <int> a(n-1);
    int total_efficiency = 0;
    int miss_efficiency = 0;
    for(int i = 0; i < n-1; i++) {
        cin >> a[i];
        total_efficiency += a[i];
    }
    miss_efficiency = -total_efficiency;
    cout << miss_efficiency << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}