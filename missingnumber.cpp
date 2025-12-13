#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<long long> a(n-1);
    long long arr_sum = 0;
    for(long long i = 0; i < n-1; i++) {
        cin >> a[i];
        arr_sum += a[i];
    }
    long long total_sum = n*(n+1) / 2;

    cout << total_sum - arr_sum << endl;

    return 0;
}