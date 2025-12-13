#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long k;
    cin >> k;
    vector<long long> a(k);
    long long sum = 0;
    bool allsame = true;
    for(long long i = 0; i < k; i++) {
        cin >> a[i];
        sum += a[i];
    }

    if(sum == k) {
        cout << 0 << endl;
    } else if(sum > k) {
        cout << sum - k << endl;
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