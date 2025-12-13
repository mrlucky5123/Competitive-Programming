#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    double sum = 0;
    for(long long i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    double total = (n * 100);
    double fraction = double(sum) / double(total);
    double ans = fraction * 100;
    
    cout << ans << endl;
    return 0;
}