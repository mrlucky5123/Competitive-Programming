#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(n == 1) {
        cout << 0 << endl;
        return;
    }
    sort(a.begin(),a.end());
    if((a[0]+a[n-1])%2==0) {
        cout << 0 << endl;
        return;
    }
    
    long long min_parity = a[0] % 2;
    long long change_back_count = 0;
    for(long long i = n-1; i >= 0; i--) {
        if(a[i] % 2 != min_parity) {
            change_back_count++;
        } else {
            break;
        }
    }
    long long max_parity = a[n-1] % 2;
    long long change_front_count = 0;
    for(long long i = 0; i < n; i++) {
        if(a[i] % 2 != max_parity) {
            change_front_count++;
        } else {
            break;
        }
    }

    cout << min(change_front_count, change_back_count) << endl;

}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}