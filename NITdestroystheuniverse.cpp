#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    bool all_zero = true;
    for(long long i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i]!= 0) {
            all_zero = false;
        }
    }
    if(all_zero) {
        cout << 0 << endl;
        return;
    }

    long long non_zero_first, non_zero_last = 0;
    for(long long i = 0; i < n; i++) {
        if(a[i] != 0) {
            non_zero_first = i;
            break;
        }
    }
    for(long long i = n - 1; i >- 0; i--) {
        if(a[i] != 0) {
            non_zero_last = i;
            break;
        }
    }
    bool multi_segment = false;
    for(long long i = non_zero_first; i <= non_zero_last; i++) {
        if(a[i] == 0) {
            multi_segment = true;
            break;
        }
    }
    
    if(multi_segment) {
      cout << 2 << endl;
    } else {
      cout << 1 << endl;
    }
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}