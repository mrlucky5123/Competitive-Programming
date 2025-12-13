#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long k = abs(arr[0]-1);
    for(long long i = 1; i < n; i++) {
        k = __gcd(k, abs(arr[i] - (i+1)));
    }
    cout << k << endl;
    
}
int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}