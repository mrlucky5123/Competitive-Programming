#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    long long even_count = 0;
    for(long long i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0) {
            even_count++;
        }
    }
    for(long long i = 0; i < n; i++) {
        if(a[i] % k == 0) {
            cout << 0 << endl;
            return;
        }
        
    }

    long long ans = INT_MAX;
    long long ops = 0;
    for(long long i = 0; i < n; i++) {
        if(a[i] % k == 0) {
            cout << 0 << endl;
            return;
        } else {
            ops = (k - a[i] % k);
            ans = min(ans, ops);
        }
    }

    if(k == 4) {
        if(even_count >= 2) {
            ans = min(ans, 0ll);
        } else if(even_count == 1) {
            ans = min(ans, 1ll);
        } else if(even_count == 0) {
            ans = min(ans, 2ll);
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}


