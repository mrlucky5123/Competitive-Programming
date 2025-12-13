#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    //Case 1:
    long long max_diff = LLONG_MIN;
    for(long long i = 1; i < n; i++) {
        long long diff = a[i] - a[0];
        max_diff = max(diff, max_diff);
    }
    //Case 2:
    for (long long i = 0; i < n; i++) {
        long long diff = a[n-1] - a[i];
        max_diff = max(diff, max_diff);
    }
    //Case 3:
    for (long long i = 0; i < n - 1; i++) {
        long long diff = a[i] - a[i+1];
        max_diff = max(diff, max_diff);
    }

    cout << max_diff << endl;
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}