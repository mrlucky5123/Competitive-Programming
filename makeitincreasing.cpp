#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long ops = 0;

    // for(long long i = 0; i < n; i++) {
    //     if(a[n - 1] < n) {
    //         cout << -1 << endl;
    //         return;
    //     }
    // }

    for(long long i = n - 2; i >= 0; i--) {
        while(a[i] >= a[i+1]) {
            ops++;
            a[i] /= 2;
            if(a[i] == 0) {
                break;
            }
        }
        if(a[i] == 0 && a[i+1] == 0) {
            cout << -1 << endl;
            return;
        }
    }
    cout << ops << endl;
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}