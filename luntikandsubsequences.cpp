#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long count_1 = 0, count_0 = 0;
    for(long long i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1) {
            count_1++;
        } else if(a[i] == 0) {
            count_0++;
        }
    }
    if(count_1 == 0) {
        cout << 0 << endl;
        return;
    }
    long long  ans = 0;
    // if(count_0 > count_1) {
    //     ans = count_1 + count_0*count_1 + count_0 - 1;
    // } else {
    //     ans = count_1 + count_0*count_1;
    // }
    // ans = count_1 * (1LL << count_0);
    ans = count_1 * pow(2,count_0);
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