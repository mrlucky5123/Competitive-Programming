#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for(long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    long long count = 1;
    long long largest_length = 1;
    for(long long i = 1; i < n; i++) {
        if(arr[i] - arr[i-1] <= k) {
            count++;   
        } else {
            count = 1;
        }
        largest_length = max(largest_length, count);   
    }
    cout << n - largest_length << endl;
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}