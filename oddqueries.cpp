#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, q;
    cin >> n >> q;
    vector<long long> arr(n);
    long long old_sum = 0;
    for(long long i = 0; i < n; i++) {
        cin >> arr[i];
        old_sum += arr[i];
    }

    vector<long long> prefix_sum(n+1, 0); // extra 0 in array is ued to adjust the 1 order indexing 
    for(long long i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i-1] + arr[i - 1];
    }
    
    while(q--) {
        long long l, r, k;
        cin >> l >> r >> k;
        long long segment_sum = prefix_sum[r] - prefix_sum[l-1];
        long long sum_to_add = (r - l + 1) * k;
        long long total_sum = old_sum - segment_sum + sum_to_add;
        if(total_sum % 2 == 1) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
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