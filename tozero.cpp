#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    long long k_minus_1 = k - 1;
    long long ans;

    if(n % 2 == 0) {
        ans = (n + k_minus_1 - 1) / k_minus_1;
    } else {
        ans = 1 + ((n - k + k_minus_1 - 1) / k_minus_1);
    }
    cout << ans << endl;
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}