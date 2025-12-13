#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++){
        cin >> a[i];
    }
    
    long long ans = 0;
    for(long long i = 1; i < n; i++) {
        ans += abs(a[i]) < abs(a[0]);
    }
    cout << (ans <= floor(n / 2) ? "YES" : "NO") << endl;
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}