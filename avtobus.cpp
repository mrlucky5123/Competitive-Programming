#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long  two_axel_bus = 4;
    long long three_axel_bus = 6;
    if(n % 2 != 0 || n < 4 ) {
        cout << -1 << endl;
        return;
    }

    
    long long min_buses = ceil(n * 1.0 / 6);
    long long max_buses = n / 4;

    cout << min_buses << " " << max_buses << endl;
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}