#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, n;
    cin >> a >> b >> n;
    vector<long long> arr(n);
    for(long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long max_time = b;
    for(long long i = 0; i < n; i++) {
        max_time += min(arr[i], a - 1);
    }
    cout << max_time << endl;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}