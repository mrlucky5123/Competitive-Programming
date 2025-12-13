#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n, k, x;
    cin >> n >> k >> x;
    long long min_sum = k * (k + 1) / 2; // sum of k lowest numbers
    long long max_sum =((n * (n + 1)) - ((n - k) * (n - k + 1))) / 2; // sum of k largest numbers
    if ( x <= max_sum && x >= min_sum){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}